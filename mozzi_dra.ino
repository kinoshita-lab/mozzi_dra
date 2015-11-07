#include <MozziGuts.h>
#include <Sample.h>
#include <EventDelay.h>
#include "Hat_int8.h"
#include "Kick_int8.h"
#include "OH_int8.h"
#include "Snare_int8.h"

#define CONTROL_RATE 64


Sample <Kick_NUM_CELLS, AUDIO_RATE> kick(Kick_DATA);
Sample <Hat_NUM_CELLS, AUDIO_RATE> hat(Hat_DATA);
Sample <Snare_NUM_CELLS, AUDIO_RATE> snare(Snare_DATA);
Sample <OH_NUM_CELLS, AUDIO_RATE> oh(OH_DATA);

EventDelay kTriggerDelay;
EventDelay kTriggerDelay2;
EventDelay kTriggerDelay3;
EventDelay kTriggerDelay4;

void setup()
{
  startMozzi(CONTROL_RATE);
  kick.setFreq((float) Kick_SAMPLERATE / (float)Kick_NUM_CELLS);
  hat.setFreq((float) Hat_SAMPLERATE / (float)Hat_NUM_CELLS);
  snare.setFreq((float) Snare_SAMPLERATE / (float)Snare_NUM_CELLS);
  oh.setFreq((float) OH_SAMPLERATE / (float)OH_NUM_CELLS);
  kTriggerDelay.set(1500);
  kTriggerDelay2.set(750 >> 1);
  kTriggerDelay3.set(750);
  kTriggerDelay4.set(3000);
}

void updateControl()
{
  if (kTriggerDelay.ready()) {
    kick.start();
    kTriggerDelay.start();
  }
  
  if (kTriggerDelay2.ready()) {
    hat.start();
    kTriggerDelay2.start();
  }
  
  if (kTriggerDelay3.ready()) {
    snare.start();
    kTriggerDelay3.start();
  }
  
  if (kTriggerDelay4.ready()) {
    oh.start();
    kTriggerDelay4.start();
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

