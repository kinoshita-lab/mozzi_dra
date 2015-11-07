// mozzi_config.hを編集して、　#define AUDIO_MODE STANDARD　にしてください。
#include <MozziGuts.h>
#include <Sample.h>
#include <MsTimer2.h>

// 使用するサンプルのファイルをここに並べて書きます。
#include "Hat_int8.h"
#include "Kick_int8.h"
#include "OH_int8.h"
#include "Snare_int8.h"


// mozziの制御スピードを決めます。
// 64サンプルに1回動きます。
#define CONTROL_RATE 64

// 使用するサンプルの実体を作ります。
// Kick_NUM_CELLSなどの値はそれぞれの .hファイルに書かれています。
Sample <Kick_NUM_CELLS, AUDIO_RATE> kick(Kick_DATA);
Sample <Hat_NUM_CELLS, AUDIO_RATE> hat(Hat_DATA);
Sample <Snare_NUM_CELLS, AUDIO_RATE> snare(Snare_DATA);
Sample <OH_NUM_CELLS, AUDIO_RATE> oh(OH_DATA);

// スイッチの設定です。Mozzi Shieldでは2, 3, 4, 5のピンにスイッチがついています。
enum {
  NUMBER_OF_BUTTONS = 4,
  Open_Hihat = 2,
  Close_Hihat = 3,
  Snare = 4,
  Kick = 5,
  
  Index_Kick = 0,
  Index_Snare = 1,
  Index_CH = 2,
  Index_OH = 3,
};

// スイッチのピンを指定します。
static const uint8_t switchPins[NUMBER_OF_BUTTONS] = {
  Open_Hihat,
  Close_Hihat,
  Snare,
  Kick
};

// 「1回Offにしたら再生できる」を実現するためにOn/Offを覚えておくところ
bool canPlayback[NUMBER_OF_BUTTONS] = {}; 
bool triggerOn[NUMBER_OF_BUTTONS] = {}; 

// シーケンサーのデータ
enum {
  NUMBER_OF_STEPS = 16,
  NUMBER_OF_VOICE = 4,
};

uint8_t sequenceData[NUMBER_OF_STEPS][NUMBER_OF_VOICE] = {
  {1, 0, 0, 0},
  {0, 0, 1, 0},
  {0, 0, 0, 1},
  {0, 0, 0, 0},
  
  {1, 1, 0, 0},
  {0, 0, 1, 0},
  {0, 0, 0, 1},
  {0, 1, 0, 0},
  
  {1, 0, 0, 0},
  {0, 1, 1, 0},
  {0, 0, 0, 1},
  {0, 1, 0, 0},
  
  {1, 0, 0, 0},
  {0, 0, 1, 0},
  {0, 0, 0, 1},
  {0, 1, 0, 0},
  
};
uint8_t currentStep = 0;
uint8_t* currentStepData = sequenceData[currentStep];



void timer()
{
  currentStep++;
  if(currentStep >= NUMBER_OF_STEPS) {
    currentStep = 0;
  }
  
  currentStepData = sequenceData[currentStep];
  Serial.println(currentStepData[Index_Kick]);
  
  // kick
  if (currentStepData[Index_Kick]) {
     triggerOn[Index_Kick] = true;
  }
  
  // snare
  if (currentStepData[Index_Snare]) {
    triggerOn[Index_Snare] = true;
  }
  
  // ch
  if (currentStepData[Index_CH]) {
    triggerOn[Index_CH] = true;
  }
  
  // snare
  if (currentStepData[Index_OH]) {
    triggerOn[Index_OH] = true;
  }
  
}

void setup()
{
  // シーケンサーの開始
  MsTimer2::set(120, timer); // 120ms経つと timerが呼ばれる
  MsTimer2::start();
  
  // mozziの開始
  startMozzi(CONTROL_RATE);
  
  // サンプルの再生スピードを設定します。
  kick.setFreq((float) Kick_SAMPLERATE / (float)Kick_NUM_CELLS);
  hat.setFreq((float) Hat_SAMPLERATE / (float)Hat_NUM_CELLS);
  snare.setFreq((float) Snare_SAMPLERATE / (float)Snare_NUM_CELLS);
  oh.setFreq((float) OH_SAMPLERATE / (float)OH_NUM_CELLS);
  
  Serial.begin(115200);
}

void updateControl()
{
  // シーケンサーからのOnをここで処理します。
  if (triggerOn[Index_Kick]) {
    triggerOn[Index_Kick] = false;
    kick.start();
  }
  
  if (triggerOn[Index_Snare]) {
    triggerOn[Index_Snare] = false;
    snare.start();
  }
  
  if (triggerOn[Index_CH]) {
    triggerOn[Index_CH] = false;
    hat.start();
  }
  
  if (triggerOn[Index_OH]) {
    triggerOn[Index_OH] = false;
    oh.start();
  }
 
  // スイッチを読み、Onになっていたらサンプルを再生します。1回Offになったら再度再生できます。
  // Kick
  if (digitalRead(Kick)) { //スイッチを読んで、Onだったら、
    if (canPlayback[Index_Kick]) { //押しっぱなしではない場合は
      canPlayback[Index_Kick] = false; // 押しっぱなしで何度も再生されないようにして
      kick.start(); // サンプルを再生する
    }
  } else { // スイッチがオフになったら、スイッチを押すと再生できるようにする。
    canPlayback[Index_Kick] = true;
  }
  
  
  // Snare
  if (digitalRead(Snare)) { 
    if (canPlayback[Index_Snare]) {
      canPlayback[Index_Snare] = false; 
      snare.start();
    }
  } else {
    canPlayback[Index_Snare] = true;
  }
  
  // CH
  if (digitalRead(Close_Hihat)) { 
    if (canPlayback[Index_CH]) {
      canPlayback[Index_CH] = false; 
      hat.start();
    }
  } else {
    canPlayback[Index_CH] = true;
  }
  
  // OH
  if (digitalRead(Open_Hihat)) { 
    if (canPlayback[Index_OH]) {
      canPlayback[Index_OH] = false; 
      oh.start();
    }
  } else {
    canPlayback[Index_OH] = true;
  }
}

int updateAudio()
{
  return (int) kick.next() + hat.next() + snare.next() + oh.next();
}

void loop()
{
  audioHook();
}

