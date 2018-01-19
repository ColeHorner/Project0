#include <stdio.h>
#include "count.h"

#define A 48271      //multiplier
#define C 0          //increment
#define M 2147483647 //modula 2^31 - 1

/*Generates a thousand numbers that should be between 0 and 1 using  *
 *the linear congruential formula.                                   */
void lcg()
{
  float average, number;
  int no_times[10] = {0,0,0,0,0,0,0,0,0,0};
  static long int seed = 1;
 
  for(int i = 0; i < 1000; i ++)
    {
      seed = ((A * seed) + C) % M; //Linear congruential formula
      number = (seed % 1000);
      number /= 1000;
      //printf("Number %d: %.3f\n", (i + 1), number); //To print out numbers
      average += number;
      count(number, no_times);
    }
  average /= 1000;
  for(int j = 0; j < 10; j ++)
    {
      if(j < 9){
	printf("Numbers between 0.%d and 0.%d: %d\n", j, j+1, no_times[j]);
      }
      else
	printf("Numbers between 0.9 and 1.0: %d\n", no_times[j]);
    }
  printf("Arithatmic mean is %.3f\n", average);
}
