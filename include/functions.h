#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

#include "main.h"

void armWave(int numberOfWaves)
{
  int loop = 0;
  while (loop < numberOfWaves)
  {
    motorSet(5, 100);
    delay(1000);
    motorSet(5, -100);
    delay(1000);
    loop++;
  }
  motorSet(5, 0);
}
void spin(int numberOfSpins)
{
  int loop = 0;
  while (loop < numberOfSpins)
  {
    motorSet(1, 100);
    motorSet(10, 100);
    delay(5000);
    motorSet(1, 0);
    motorSet(10, 0;
    delay(5000)
    loop++;
  }
  motorSet(5, 0);
}