#ifndef OH_H_
#define OH_H_
 
#include "Arduino.h"
#include <avr/pgmspace.h>
 
#define OH_NUM_CELLS 4932
#define OH_SAMPLERATE 16384
 
const int8_t __attribute__((progmem)) OH_DATA [] = {3, 2, 8, 1, 6, 27, -6, -3, -5,
-26, -32, -4, -46, -25, 11, -18, -40, 7, 18, -15, 28, -18, 34, 49, 4, 28, 42,
21, -33, -24, -10, -13, -5, -34, -28, 13, -13, -12, -6, 21, 55, 9, 5, 28, 28,
26, -10, -45, 2, -7, -22, -39, -22, 46, -27, -31, 16, 18, 43, -9, -15, 38, -9,
-11, -25, -7, 25, -37, -2, -6, 7, 58, -39, 12, 37, -25, 16, 0, 27, 0, -17, 4,
-43, -20, -2, -63, -7, -28, -27, 5, 8, 13, 22, 69, 18, 39, 15, 52, 34, -47, -6,
-18, -19, -22, -90, -9, -23, -95, -9, -18, 28, 39, 1, 52, 53, 34, 55, 35, 72,
35, -19, -4, -41, -9, -15, -50, -51, -23, -39, -33, -4, -37, -6, -7, -2, 16, 4,
28, 9, 7, 11, 39, 15, 33, 13, 24, 70, 4, 8, -38, 27, -44, -59, -23, -44, -41,
-59, 12, -45, -21, 10, 0, 18, 40, 56, 63, 33, 80, 62, 27, 33, -14, 1, -6, -36,
-68, -56, -42, -34, -49, -28, -24, 36, 31, -49, 41, 53, 25, 34, 3, 35, 53, 25,
0, 12, 35, 20, -42, -23, 1, -24, -54, -115, 23, 4, -73, -66, -36, 49, -17, -41,
15, 42, 39, 25, 23, 70, 59, 48, -3, 29, 65, -27, -37, -52, -4, -13, -53, -79,
-20, 6, -77, -60, -7, 21, 42, -36, -40, 105, 48, 26, 52, 68, 71, 6, -22, -17,
-1, 2, -73, -104, -19, -15, -60, -96, 5, 65, -51, -7, 28, 39, 73, 32, -8, 60,
84, 12, -12, -10, 18, -40, 3, -76, -46, 36, -71, -58, 4, -15, 22, -11, -45, 74,
-14, -12, -5, -10, 27, 15, 23, 35, 13, 37, 5, -18, 36, -19, 8, -12, -36, -8, 15,
-11, -44, -30, 13, 9, -54, 3, 50, 11, -15, 28, 17, 16, 62, -12, -28, 45, 22,
-65, -33, 2, -28, -49, -28, -12, 10, 46, -18, -25, 21, 44, 10, -43, 22, 53, 18,
-28, -26, 20, 22, 5, -54, -6, 38, 14, -65, -29, 69, 5, -39, -23, 31, 38, -16,
-43, 0, 41, 8, -81, -25, 15, 13, -33, -43, 57, 17, -22, -4, -7, 12, 40, -15, 17,
27, 49, 13, -48, 13, -24, -8, -35, -36, 13, 12, -1, -44, 11, 61, 32, -3, -11,
50, 8, -36, -7, -22, 12, -1, -45, -38, 32, 22, -77, -49, 37, 19, 17, 30, 23, 40,
25, 22, 1, 30, 6, -26, -53, -14, 18, -45, -16, 4, -29, 30, 23, -19, 30, 0, 37,
-38, -5, 39, 7, 0, -38, -1, -10, 22, -2, -21, 13, 4, 5, 18, -7, 36, -18, -59,
15, -26, 12, -2, -12, 10, 21, 56, 7, 15, 65, 43, -20, 12, 25, 9, -26, -41, -85,
-15, 32, -79, -55, 3, 34, -39, -13, 59, 45, 30, 14, 19, 63, 49, -17, -33, 5, 21,
-40, -33, 8, 44, -4, -19, 0, 4, 6, -28, -28, -10, 29, 6, -24, 8, 25, -20, 4, 15,
1, 67, 12, -27, 39, 40, -14, -21, 4, -15, -42, -32, -35, -36, -29, -44, -20, 18,
60, 57, 15, 45, 70, 42, 4, -2, 35, 0, -24, -21, -7, -7, -29, -44, -20, -8, 8,
-7, -47, 36, 40, -19, -6, 25, -12, 1, 20, -7, -1, 20, 8, -33, -6, 66, 19, 23,
30, 1, 21, -40, -2, -33, -51, -2, -37, -14, 9, 7, 6, 15, 39, -10, 25, 41, 22,
11, 13, 20, -15, 7, -18, -37, -6, -33, -80, 21, -4, -13, 19, 3, 44, 19, 26, 7,
35, 35, -34, -6, -15, -16, 14, -43, 37, 17, -13, 24, 10, 27, -43, 12, 25, -32,
11, -10, -48, 25, -19, -30, -21, -26, 37, -6, 5, 12, 41, 37, -3, 31, -10, 25,
12, -67, -8, 12, 5, -54, -13, 30, -22, 4, 1, 21, 8, -28, -8, -35, 15, 31, -18,
-20, -4, 33, -39, -17, 30, -8, 28, 9, -6, 40, 2, -8, -18, 5, 31, -30, -29, -29,
-28, 11, -50, -12, 45, 7, 34, -18, 36, 55, -20, -12, 5, 20, 11, -23, -43, 4, 42,
-26, -22, -6, -11, 30, -66, -42, 26, 30, -37, -12, 33, 15, 41, -19, 8, 50, 30,
-46, -22, 36, 19, -34, -35, 12, -11, -30, -33, -13, 0, -28, -15, 5, 31, 52, -19,
25, 28, 2, -2, -8, 36, 15, -14, -15, 3, -12, -26, -37, -15, 20, 3, -17, -15, -1,
15, -19, 16, 30, -17, -12, 14, 9, 12, 0, -7, 46, 21, 12, 2, 16, 24, -17, -57,
-11, 4, -54, -26, -15, -2, -16, 14, 3, 11, 37, 1, -24, 30, 78, 2, -5, 8, 11,
-20, -27, -28, 2, -2, -32, -56, -33, 45, 0, -17, 0, 53, 40, -11, -8, 21, 2, -13,
-14, -7, 30, 18, -25, -60, 47, 26, -41, -20, 19, 20, -14, -24, -17, 42, -32,
-36, -29, 8, 42, -29, -18, 29, 51, 34, -5, 6, 29, 7, -8, -42, -6, 24, -26, -68,
-16, 40, 25, -47, -38, 8, 7, 6, -37, 20, 56, 32, -14, 5, 44, 19, -26, -32, 21,
-6, -21, -7, -19, 40, 20, -30, -11, 16, 22, -83, -35, 26, -9, -12, 9, 35, -1,
16, 7, -1, 46, 7, -23, 24, -10, 21, 4, -22, 37, -15, -19, -8, -8, -22, -24, -3,
-11, 26, 41, -5, -18, 16, 0, -10, 10, 20, -24, -1, 22, 18, 25, -24, 10, -14, -8,
-3, -22, 1, -12, -19, -26, 15, 23, -8, 7, 20, 7, 43, -11, -13, 18, 35, 45, -25,
19, 12, -27, -63, -31, -12, -48, -37, -36, -24, 10, 8, -20, 48, 18, -5, -11, 30,
46, 16, 27, -19, 26, 5, -12, 12, -3, 9, -5, -33, -20, 0, 10, -66, -33, 35, -15,
9, -13, -2, 8, 3, 1, 2, 44, 51, -12, -48, 12, 37, -24, -58, 11, 15, -25, -25,
-45, 14, 29, -11, -30, -15, 64, 12, -24, 20, 69, 31, -22, 28, -12, 2, 0, -18,
16, 19, -18, -46, -20, 4, -31, -31, -29, -28, 41, -22, -29, 9, -8, -3, 13, 37,
67, 32, 6, 25, -1, 10, -32, -10, 2, -31, -23, -54, -6, 13, -22, -29, -5, 19, 11,
15, 29, 27, 14, 4, 14, 18, -5, 20, -4, -18, 11, -13, -36, -17, -13, -12, -12,
29, 44, -25, 17, 17, -41, -48, 16, 12, -24, 5, -14, 20, 28, 16, 18, -5, 43, 16,
-8, -11, -2, 11, -27, -8, -13, -35, -8, -21, -13, 28, 9, -7, -29, 35, 15, -2,
26, 28, 35, 9, -46, -45, 20, -22, -46, -14, 11, -5, -3, -13, 3, -4, -6, 7, -19,
31, 25, 29, 9, 2, 52, 4, -20, 15, -13, -21, 14, -19, -24, -16, 22, -28, -52, 47,
0, -24, -29, -15, 21, 13, -10, 8, 48, 20, 20, 1, 3, 18, -13, -59, -14, 40, -24,
-21, 36, 36, 4, -7, -35, 2, 0, -14, -10, 9, 6, -19, 9, 12, 15, 25, 7, -6, 15, 0,
5, -14, 25, 25, -16, -21, -24, -13, -30, -13, -16, -6, 25, 5, 11, 12, 59, 56,
-2, 28, 8, 2, -39, -35, 10, -26, -2, 12, -37, -22, 8, -36, -23, 34, 23, -8, 35,
26, -7, 19, 23, 17, -19, -28, 22, -2, -19, -10, -4, 30, -16, 9, -4, 14, 15, -92,
-22, 23, -14, -39, -7, 4, 27, 26, -9, -3, 31, 34, -28, -1, 26, 16, -23, -13, -3,
23, 1, -37, -16, -23, 15, -1, -11, 16, 45, 0, -40, 22, 10, -11, -3, -32, -10,
29, 4, -43, 0, 33, -14, -40, 1, 46, 33, -9, 3, 11, 12, 9, -18, -33, 4, 30, -46,
-27, 42, 23, -43, 6, 19, 13, 31, -14, -37, 0, 30, -25, -50, 6, 26, -44, -24, 14,
0, -9, 19, 13, -11, 39, 24, -32, 20, 40, 1, -15, 4, -7, -24, -3, -8, -9, 7, 23,
-9, -13, 21, 29, -25, 5, 1, -40, 10, 10, -21, -4, -1, -34, -15, 19, 14, -8, 39,
11, 34, 16, -12, 34, -7, 2, -21, -11, 3, -6, -44, -58, 18, 9, -18, 22, 26, -8,
0, 36, 30, -13, 30, 44, -65, -11, 24, -27, -31, 0, -10, -54, 19, -8, 1, 34, 12,
5, -32, 6, 59, -47, -11, 36, -16, -5, 7, 26, -36, 11, -3, -32, 5, 42, 0, -10,
35, -11, -11, -1, -32, -36, -7, -8, 3, -3, -6, 36, 33, -4, 17, 29, 24, 13, -15,
-14, 36, -47, -80, 41, 17, -40, -5, 1, -10, -20, -13, 1, 18, 39, 9, -14, -9, 68,
6, -63, 12, 19, -30, -8, 38, 12, -1, 3, 7, -20, 20, 8, -32, -11, -1, -13, -43,
23, 43, 6, -20, 2, 28, -14, 20, 30, -22, 6, 27, -34, 6, 26, -9, -21, -19, 11,
-10, -15, -19, 10, 49, 33, 1, 21, 26, -22, -59, -5, 19, -14, 37, 19, -27, -11,
28, -18, -34, 20, 9, -40, -9, 44, -18, 24, 40, 0, -16, 5, 26, -38, -18, 27, -1,
-15, 10, 26, 4, 5, 21, -24, -44, 10, 15, -61, -33, 46, 13, -13, 32, 13, -18, 16,
-8, -58, 14, 31, -23, 4, 1, 2, -4, -21, 13, 12, 11, 18, -17, 17, 41, -9, -18, 4,
10, -51, -12, -2, -16, 7, -20, -11, -3, 47, 20, 2, 5, 29, -6, -14, 28, -10, -19,
-2, -35, -25, 47, -11, -37, -28, 26, 23, -20, 10, 49, 19, -21, 2, -5, 14, -3,
-15, -18, 16, 32, -19, -26, 40, 27, -55, 8, 17, -4, -4, -28, -40, -1, 8, -36,
-11, 13, 22, -30, 1, 49, 50, 21, 28, 37, -27, 34, -2, -50, -5, 5, -68, -64, 1,
-4, -13, -21, 1, 29, 19, -16, -1, 19, 82, 30, -21, 27, 31, 1, -28, 3, -14, -30,
-16, 1, -3, 14, 5, -43, -17, 13, -16, -36, 1, 17, -23, -8, 20, 23, 26, 23, 22,
19, 11, 20, -18, 9, 4, -42, 15, -22, -6, -22, -54, -6, -12, -25, 18, 15, 1, 33,
24, 4, 5, 47, -11, -54, 17, 5, -4, -5, 16, 9, 6, 4, -52, -3, 17, -6, -49, -16,
43, -3, -34, -6, 23, 0, -7, 12, 6, 25, 18, -32, 35, 33, 13, -12, -11, 19, -17,
-46, -45, 5, 4, 12, -55, -14, 39, 23, -27, 3, 43, 3, 3, -12, 14, 23, 29, -22,
-2, -1, 9, -28, -32, 40, 0, -32, -13, 30, 18, -12, -20, -14, -23, 16, 3, -21,
19, 33, -22, -35, 63, 52, -30, -16, 28, -3, -20, 15, 3, 3, 15, 3, -52, -6, 35,
-25, -21, -10, 14, 12, -6, 1, 31, 19, -5, -8, -21, 32, 12, -44, -10, 30, 32, 18,
7, -1, 26, -4, -53, -34, 20, -12, -41, -7, 5, 16, 1, 4, -4, 19, 27, 5, -8, 28,
48, -17, -8, 32, -24, -41, 2, 1, -26, -51, 9, -11, -20, 29, 24, 7, -6, 47, -10,
-10, 26, -12, -23, -17, 6, 10, -31, -1, 21, -23, 13, 9, 17, -9, 18, -6, -41, 30,
11, -27, 8, 12, -53, 3, 20, -10, 21, 25, -17, 14, 30, -13, 20, 10, -13, -20, -5,
-18, -22, 4, -44, -32, 4, 19, 30, 4, 12, 47, -2, -50, 43, 44, -34, -8, 6, -22,
-5, -5, -33, 2, 19, 12, -14, -19, 16, 31, -23, -15, 50, 9, -19, 6, 14, -31, -17,
-9, 7, -5, 4, 1, -23, 35, 35, -5, 9, 45, -33, -25, 5, -33, -8, 8, -14, -18, 9,
0, -23, 0, 25, 17, -3, -1, -22, 8, 34, -10, -17, 23, 11, -31, 14, -2, -8, -1,
-10, 9, -7, 22, 37, -46, -23, 32, -7, -29, 13, 21, -31, -8, 6, 16, -33, 18, 37,
-35, -9, 22, -13, -22, 22, -26, -17, -23, 1, -1, 3, -4, -8, -1, -2, 58, -10, -3,
29, 4, 5, 12, 3, -24, -7, -18, -25, 6, 2, -16, -23, 9, 1, -18, 19, 5, 8, 34, 2,
1, -14, 14, -22, -51, 26, -7, -22, 2, 12, -18, -2, 35, -13, -16, 48, 8, -40, 14,
38, 2, -12, 10, -11, -10, 12, -6, -24, 11, 17, -28, -6, 16, -1, -13, -8, 23, -1,
-28, -22, 6, 23, 19, -9, -21, 35, 11, -24, -9, 35, -7, -28, 7, -18, 1, 15, 8,
-18, 13, 35, -37, -17, 39, 0, -9, -10, 0, 10, 1, -10, -13, -17, 18, 30, -30, 5,
23, 8, -30, -8, 22, 15, 23, 0, -12, -6, 19, -20, -25, 15, 19, -21, -11, 29, -18,
6, 3, -31, 35, 26, -29, -2, 9, -32, -5, 3, 8, 18, 4, 4, 25, 1, -20, 16, -8, 9,
-1, -37, -21, 24, -7, -45, 37, 21, -31, -11, 35, 4, -7, 32, 4, -9, 18, -8, -23,
-1, -17, 3, -11, -9, 17, 13, -28, 16, 26, -15, 34, 1, -11, -2, -12, -9, -6, 6,
7, -19, 1, 30, -14, -12, 22, 7, -5, 11, -13, -11, 39, -14, -40, 8, 14, -17, -15,
3, 0, 33, 15, -4, 26, 41, 1, -38, -11, 45, -28, -40, 20, 7, -14, -19, 14, -2,
15, 8, -17, -14, 24, -8, -18, 6, 13, 20, -32, 13, 22, -3, -4, 10, 26, 18, 5, 7,
1, -1, 7, -22, -26, 2, -1, -35, -24, 3, 0, 12, 15, 21, 4, 16, 20, -24, 24, 34,
9, -28, -11, 0, -20, -13, -30, -6, 24, -21, -7, 36, 2, 31, 4, 16, 1, -13, 23,
-6, -40, -20, 21, -46, -29, 30, -18, -19, 38, 14, -34, 16, 32, -18, -22, 14, 7,
-11, 18, 10, 0, 9, 2, -1, 18, 9, -5, -19, -33, -3, 9, -42, -2, 22, -48, -9, 2,
-13, -8, 33, 23, 7, 32, 0, 11, 30, -8, -7, 20, -35, -17, 3, -24, -27, 11, 9,
-10, 25, -4, 5, 24, -2, -6, -5, -13, 14, 1, -31, -4, 27, -19, -35, 48, 14, -34,
0, 21, -3, -35, -5, 0, 12, 8, -24, -20, 8, 41, -12, -43, 51, 40, -37, 13, 13, 9,
4, -19, -4, 3, -10, -25, -18, -16, 18, 15, -8, -5, 25, 12, -21, 10, 6, 29, -4,
-35, 0, -1, 9, -17, -17, -12, 37, 10, -25, 25, 40, 13, -23, 4, 12, 12, -28, -37,
7, 9, -37, -14, 16, 0, 8, -6, 1, 23, 4, -7, 5, 31, 25, -42, 6, 22, -15, -3, -3,
11, -6, 5, -18, -15, 2, 13, 0, -10, 19, -6, -15, -35, 2, 24, 10, -3, -5, 13, 1,
-2, 3, 8, 8, 5, -9, 1, 2, -10, 4, -2, -3, 28, -18, -11, 44, -2, 1, 4, -21, 25,
1, -41, 12, 3, -32, -1, 7, -6, -1, -4, 12, 14, -4, 7, 5, 1, 15, -28, -15, 14,
-1, 0, -3, 19, 3, 27, 10, 10, 17, -4, 12, -22, -6, 10, -24, -21, 1, -21, -3,
-12, -25, 14, 3, 4, 4, 11, 20, 12, 13, 30, 6, -13, 20, -28, -3, 34, -25, -33,
30, 27, -39, -1, 18, -22, -12, 0, -25, 20, 12, -8, 1, 8, 8, 10, 16, -4, 21, 8,
2, -22, 13, 2, -3, 4, -29, -2, 3, -29, -14, 21, 2, 16, -10, 21, 27, 19, -9, -6,
26, -12, -5, -7, -31, -11, 5, -21, 3, -6, -8, 5, -2, -20, 5, 22, -17, 4, 25,
-28, 4, 32, -10, 7, 27, 2, -14, 8, -2, 3, 7, 17, -6, -25, -3, -3, -47, -22, 3,
-11, -8, -6, 3, -6, 37, 13, 2, 35, 19, -6, -10, -6, 8, 12, -8, -17, -13, -3,
-27, 6, 11, -6, 5, 3, 23, -17, -8, 3, -9, -12, 3, 8, -24, 3, 7, -1, -11, 15, 6,
0, 21, 2, -8, -11, 5, 16, 9, -22, 15, 3, -32, 4, -20, -7, 27, -2, 2, 12, 8, 11,
-20, -12, 8, 5, -36, 8, 9, -31, 10, -16, -3, -7, 6, 3, -9, 11, 25, 3, -19, 41,
38, -13, -18, 13, 3, 1, -3, 5, 7, -28, -1, 2, -21, -11, -7, -15, -20, -17, 5,
-4, 6, 17, -15, 13, 35, 0, 2, 32, -3, -14, 6, 0, 4, -3, -5, -1, -13, -14, 6, 1,
-17, -13, 16, 10, 1, 9, 1, 16, -6, -15, 0, -21, 8, 4, -13, -4, 11, -7, -18, 18,
21, -19, -30, 25, -5, -17, 15, 14, 0, -13, -2, 1, 4, -3, 2, 6, 24, -13, -14, 33,
-3, 12, -5, 0, 7, -26, -41, -16, 9, -14, -7, -2, -13, 14, -7, -36, 3, 8, 28, 12,
14, 26, 21, 1, 5, 8, -9, 11, -31, -17, 6, -3, -17, -17, -6, -2, -5, -13, -15,
-19, 25, -2, -28, 24, 37, -11, -24, 25, 41, 12, -9, 24, 22, -12, -21, -15, -6,
18, -4, -30, -7, -18, -24, -17, 4, 19, 25, 8, -12, 33, 33, 0, 6, -1, 10, 11,
-13, -4, -10, -3, -12, -33, -13, 11, -5, -29, 19, 15, -2, 26, 4, 3, 25, 1, -21,
7, 23, 3, -13, -20, -1, 18, 1, -22, 23, 1, -24, -3, -4, 2, -39, -2, 1, 16, 33,
-6, -9, 14, 30, -28, -20, 33, 31, 1, 0, -4, -4, -17, -13, -22, -13, 12, -20,
-20, 9, 4, 6, 19, -6, 13, 16, 12, 1, 6, 20, -3, -17, -11, 16, -6, 1, 1, 0, 5, 3,
-11, -22, 20, 14, 2, -7, -18, 10, -8, -13, 7, -8, -16, 12, 24, 13, 17, -7, -13,
10, 16, 4, 1, 1, -10, -18, 0, 10, -3, -34, -16, 41, 8, -20, 27, 28, -5, -3, -17,
22, 10, -30, -6, 12, 3, -16, -7, 5, 17, -30, -25, 24, 17, -7, -33, 8, 31, -2,
-4, 19, 27, 2, 1, 2, -3, -22, -1, 19, -19, 9, 26, -19, -31, 20, -23, -29, 9, -5,
7, 9, 5, 6, 5, 6, 35, 3, -19, 1, 3, -39, 5, 18, 0, -9, -29, 26, 25, -10, -9, 30,
3, -27, -29, -13, 17, 15, -33, -12, 26, 2, -39, -31, 45, 4, -13, 25, -11, 7, 11,
-6, 17, -2, -9, 4, 2, -12, 6, -12, -46, -6, 26, 3, 2, 2, -22, 13, 27, -3, -10,
-16, 11, -7, -34, -8, 27, 20, -8, 9, 1, 3, -18, -12, 14, -9, -4, -23, -13, 1,
-14, 18, 27, 30, 8, -13, 7, 19, 5, -16, -7, 8, 10, -12, 17, -13, -59, -11, 11,
-11, -15, 25, 9, 3, 15, 8, -6, 13, 17, -7, 9, -1, -21, 1, 15, 3, 11, -24, -3,
14, -10, -12, -6, -4, 7, 13, -18, 13, 16, -1, -2, 7, 11, 10, 12, -15, 4, 24, 2,
3, 4, -9, 7, -10, -37, -11, 16, -3, -35, -12, 17, 31, 1, -15, 23, 13, 10, -6, 1,
31, 7, -20, -14, -3, -6, -3, -22, -21, 19, 12, -45, -2, 16, 3, 5, 9, 25, 19, 21,
-28, -5, 34, -3, -12, 7, 6, 3, -23, -13, -6, -1, -1, -6, -3, -15, 13, -13, -29,
12, 15, -10, 9, 16, 5, 20, 14, -8, 17, 21, -14, -9, 5, 1, 5, -19, -10, 4, 0, 0,
-36, -4, -3, -22, 7, 15, 8, 22, -4, -4, 20, 38, 12, -15, 7, -16, 0, -4, -5, -8,
-18, -4, -9, -16, -1, -1, 11, -4, -24, 16, 9, 19, 0, 12, 26, -7, -1, 7, 27, -8,
-26, -20, -21, 14, 3, -31, 8, 18, -23, -13, 3, 15, 29, -10, -17, 12, 16, 0, -10,
13, 23, 12, -5, -12, -11, 9, -21, -11, 21, -7, -14, 1, -10, -5, 9, -5, -23, -6,
33, -11, -28, 6, 19, 0, 13, 16, 0, -12, -6, -11, 2, 19, -4, 11, -33, 8, 9, -33,
-7, 5, 8, 8, 0, -31, -5, 16, -14, -2, 37, 7, -4, 10, -4, -5, 5, -21, -18, 11,
12, -16, -11, -4, -18, 1, 10, -7, -3, 23, -18, -17, 21, 4, -8, -6, 19, 21, -22,
-7, 8, -4, -23, 17, 16, -29, -6, 6, 1, -14, 6, -13, -2, 17, -6, -6, -4, 24, 5,
-12, -1, 19, 25, -15, -3, -4, -7, 2, 7, -16, -18, 32, -10, -16, -9, -6, -7, 1,
14, 13, 10, -14, 8, 5, 5, 19, -4, 0, 7, 5, 0, -14, 10, 16, -1, -15, 21, 6, -43,
-7, 3, -21, -8, 24, 2, -5, -3, -1, 6, 13, 23, 5, -1, 17, 6, -17, -14, 28, 15,
-35, -11, 14, -18, -10, 16, -9, 3, 20, 4, 0, 5, -17, -3, 10, -1, 7, 17, -3, 0,
-6, -28, 29, 25, -14, 4, 12, -2, -18, -10, 17, 4, -9, -9, -19, -11, -13, 3, 10,
9, 15, 26, -24, -8, 23, -6, 26, -15, -21, 10, 12, -4, -17, 8, 24, -4, -8, -4,
-1, 8, -43, 2, 42, 8, -5, -2, 11, 9, 7, -31, -18, 36, 10, -22, 1, 7, -11, 8, 11,
-10, 0, -21, -18, 2, -12, 12, 8, 6, 20, 16, 6, -2, 8, 14, 0, 6, 4, -16, -5, 5,
-13, -21, 19, 9, -33, -3, 17, -10, 1, -3, 10, 31, 0, -14, -6, 5, -11, -18, 7,
20, 8, 14, -2, 5, -2, -7, 8, 14, 14, -21, -1, -10, 0, -1, -26, 6, 22, -25, -15,
21, -24, 10, 26, 7, 8, 1, -6, -2, 11, -8, -23, 16, 8, -22, 6, 12, 11, -16, 8,
-5, -16, -6, 3, -7, -12, 5, -4, 22, -4, 21, 12, -1, -1, -18, -23, 3, 19, -27,
22, 14, -33, -14, 20, -2, -21, 3, -7, 18, 34, -2, -13, -11, 33, 5, -42, 13, 24,
-14, -44, -9, 26, -21, -13, 18, 2, 17, 9, -19, -11, 31, -10, -41, -2, 11, -13,
-15, 11, 3, 2, 12, 6, -20, 13, 21, -15, -10, 24, 8, -19, 22, -14, -45, -7, -15,
-6, 11, 19, -13, -32, 18, 27, 0, 9, 15, 19, 11, -9, -35, -42, 37, 11, -29, 23,
18, -13, 0, -3, 6, -13, -17, 2, 1, 3, -23, -8, -4, 7, 10, -7, 6, 18, -19, -4,
25, 6, 12, 33, -14, -24, 6, -4, 6, 4, -1, -32, -2, 19, -25, -22, 31, 27, 9, 6,
-1, -4, -27, -9, 18, -4, -3, 14, -7, -16, 8, -2, -35, 27, 21, -28, -4, 29, 5,
-21, 14, 5, -14, 4, 32, -37, -11, 54, -6, -15, 14, 10, -12, -27, -13, 21, 10,
-7, -20, -22, -4, 15, -22, -30, 30, 27, -6, -9, 11, 0, 7, 8, -12, 34, 8, -41,
-6, 6, -6, -14, 6, 25, 15, 17, -2, -29, 17, 21, -11, -17, -9, 1, 0, 7, -11, -2,
-10, -4, -16, -21, 3, 24, 2, -30, 33, 28, -19, -2, 14, -19, 12, 23, -15, 9, 16,
-21, -9, 32, 32, -14, -1, 12, -9, -10, -16, 8, -5, 15, 9, -23, -6, 5, -6, -18,
3, -1, -17, -11, 15, 8, 17, 31, 0, 2, 7, 2, 7, 2, 14, 14, 2, 8, 1, -26, -3, 13,
-34, -2, 11, -14, -2, 0, -7, 0, 6, 2, 1, 2, 12, -1, -27, 8, 38, -20, -10, 25, 4,
-14, -13, -1, 24, 22, -14, -15, 15, 23, -16, -3, 1, -5, 3, -12, 7, 1, -2, 16,
-2, 0, 18, 4, -43, -9, 16, -17, -12, 22, 9, -3, 13, -21, -8, 22, 8, -39, 3, 17,
1, -2, -11, 24, 7, 0, 0, -39, -5, 23, -31, -12, 11, 17, -19, -13, 28, 4, -17, 5,
24, -1, -5, 1, -3, -16, 6, 17, -16, 1, 12, -26, 6, 8, -26, 0, 3, 10, 8, -17, 8,
3, -27, 2, 16, -4, -9, 1, -11, -18, 18, -2, -13, 19, 9, 3, 13, -5, -19, 22, 13,
-14, -11, 4, -9, -10, 17, -11, 16, 14, -32, -18, 16, 11, -27, -16, 26, 17, -18,
-15, 11, 3, -20, -1, 4, -5, 22, 3, -13, 11, 13, 1, -16, 35, 38, -9, -36, 3, 15,
-4, 5, -21, -14, 7, 17, -32, -27, 26, -6, -24, 2, 0, 5, -4, -14, 2, 17, 10, -8,
-10, 10, 10, 2, 5, 12, 26, -17, -24, 12, -1, -14, -8, -12, 5, 12, -13, -6, 16,
0, 3, 3, -7, 12, 7, -7, -2, 7, 6, 4, -25, -19, 17, -18, -34, 12, 3, -14, 10, -2,
3, 20, 4, -4, 2, 28, -11, -16, 2, 10, 14, -13, 18, 14, -13, -15, -15, -11, 2,
21, 0, -8, 8, -19, -19, 9, -7, -15, 13, 3, -7, 11, 8, 20, 20, -1, -5, 17, -7,
-10, 5, -13, 8, 10, -11, -11, 6, -13, 2, 19, -1, 1, -15, 8, -9, 7, 28, 2, 2, 5,
-6, -11, -10, -9, 16, 22, 5, -39, 17, 27, -27, -14, -2, 6, -2, -20, -9, 13, 8,
2, 17, 29, -1, -3, 1, 1, 7, 2, -4, 1, 16, -13, -12, -12, -11, 3, 4, 5, -12, -5,
11, 1, 1, 25, -2, -1, 11, -23, -21, -2, 17, -8, -6, 39, -1, -14, -1, 4, 14, -18,
-12, 0, 3, 3, -7, -16, 3, 16, -7, 6, 12, -3, -7, 16, 5, 2, 30, 3, -8, -6, -18,
-7, -8, -17, -3, 7, -9, -10, 2, -2, 15, 16, -13, 11, 32, -26, -1, 21, -12, 18,
-12, -5, 22, 20, -16, -18, 14, 0, 8, -4, 10, -19, -30, 7, 3, -20, -6, 4, -10,
-10, 17, 9, -23, 24, 26, -3, -2, 14, -4, -10, 13, 1, -26, 14, 5, -28, 2, 0, 9,
-19, -5, 12, 8, -4, 3, -5, -20, 35, 11, -24, -5, 23, -1, -20, 14, 21, -12, -7,
1, 8, 14, -8, -15, -2, -5, -16, 5, -5, -19, 12, 21, -13, 20, 15, -5, 0, -12, 8,
-8, -9, 14, 11, -14, -1, -3, -29, 5, 26, -9, -9, -4, 0, 14, -5, 11, 10, -16, 3,
6, -15, 0, 30, -28, -29, 41, 10, -9, 11, 6, -1, -9, -4, -12, -13, -13, -12, 3,
-8, 21, 6, -48, -13, 40, -10, -6, 20, -5, 19, 20, -4, -20, 18, 5, -25, -21, -6,
7, -6, -27, 2, 46, -16, -20, 1, -14, 14, 2, -15, 16, 14, -11, -7, 6, 12, 5, -8,
-8, 15, 1, -6, -8, -10, 13, 6, 3, -6, 3, -18, -21, 10, -21, 2, 33, 5, 3, 24, 1,
-13, 7, 2, -1, -2, -21, -19, 19, 3, 6, -1, -9, 9, -14, 1, 9, -8, -6, 14, 23, 11,
-8, -7, -23, -1, 14, -3, -6, -2, -10, -16, 4, 15, 9, -3, 10, -2, -5, -8, -11,
-3, 8, 10, 14, 16, 6, -4, -23, 20, 17, -24, 0, 19, -9, -16, 13, -12, -16, 1,
-21, 6, -4, -6, -3, -6, 26, 26, 5, -15, -3, 29, 4, -29, 6, 7, 4, 8, -22, -14,
15, 9, -16, 12, 26, -19, -5, 3, -14, 13, -6, -20, 2, 11, 3, -8, -12, -1, 17, 6,
-2, 5, 26, 11, -24, 1, 19, 14, -11, -22, 1, 12, -6, -5, -12, -10, 19, -2, -20,
19, 37, -9, -24, 21, 8, -15, -1, -17, -4, 23, -3, -8, 14, -15, -1, -6, -16, 5,
-1, 10, -13, 8, 2, -2, 27, 1, 9, 17, -5, -11, 12, 22, 1, -7, -2, -2, -1, -12,
-11, -3, 2, -5, -26, -9, 9, -3, -2, 13, 12, 3, 13, -5, -19, 19, -4, -11, 21, 6,
-6, -13, 3, -5, 0, 3, 9, 6, -11, 10, 8, -27, -19, 28, -2, -15, -8, -2, 5, 4, -5,
-3, 23, -1, -16, -12, 13, 17, -19, -12, 14, 10, -2, -13, 1, -1, 4, 0, -5, 13, 0,
3, 2, 1, 13, 10, -3, -17, -4, -5, -20, -5, 0, 3, 3, -3, 1, 0, -10, 3, -1, -2,
10, -13, -8, 5, 23, 6, -11, 5, 17, 4, -27, -5, 10, -3, 2, 2, -8, -10, 2, -13,
-12, 18, -3, -19, -6, 11, -5, -2, 9, 7, 13, 1, 5, -7, -17, 6, 10, -9, -9, 13, 5,
-6, 0, -9, 4, 12, -7, -4, 3, -2, 2, -6, -5, 5, 3, 4, -9, -3, 5, 0, -1, -1, 8, 5,
-4, -4, -5, -3, 1, 6, -9, -17, 9, 5, -9, 3, 16, 0, -2, 12, -2, 4, 12, -6, -9,
11, 5, -12, -10, 6, -4, -7, 2, -6, 7, 5, 2, -1, -5, 10, 5, -4, -3, 6, 3, -11, 4,
2, -2, 3, 0, 1, -1, 0, -3, 0, 1, -2, -4, 4, 1, 2, 3, -6, -3, 6, 5, -7, 4, 11,
-3, -1, 2, 4, -8, -3, 4, -2, -2, 1, 4, -5, 0, 11, -6, -11, 9, 2, -5, 2, -1, -6,
2, 1, -5, 3, 5, -2, -3, 0, 7, 0, -8, 8, 2, -1, 1, 0, 0, -2, 3, -2, -3, 3, 2, 1,
1, 1, 3, 2, -2, -3, 1, -2, 1, 0, -3, 2, 0, 0, -2, 1, 3, 4, -1, 0, 5, 1, -3, 1,
2, -2, 2, 0, 0, 3, -1, -3, -2, 1, 2, 0, -1, 1, 2, -3, -1, 1, 0, 1, 2, -2, -3, 3,
0, 0, 2, 1, 1, 0, -1, 2, 0, 1, 1, -2, -1, 0, -2, -3, 2, 2, -2, 0, 0, -1, 0, 0,
0, 0, 1, 1, -1, 1, 0, -2, 1, 0, 0, 1, -1, -1, 0, 0, -1, 0, -1, 0, -1, -1, 0, -1,
0, 0, 0, };
 
 #endif /* OH_H_ */