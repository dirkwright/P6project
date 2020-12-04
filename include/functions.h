#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

#include "main.h"


void armWave(int numberOfWaves)
{
  int loop = 0;
while (loop < numberOfWaves)
{
motorSet(5,100);
delay(1000);
motorSet(5,-100);
delay(1000);
loop ++;
}
motorSet(5,0);

}

void roboDance(int danceTime){
int loop = 0
while (loop < danceTime)
{
motorSet(1, 500);
delay(500);
motorSet(10, 1000);
delay(500);
motorSet(1, 500);
delay(500);
motorSet(1, -200);
motorSet(10, -200);
delay(100);
motorSet(1, 200);
motorSet(10, 200);
loop++;
}
motorSet(1, 0);
motorSet(10, 0);
}
