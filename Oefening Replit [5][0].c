/*
  Maak een functie genaamd printHelloWorld() die 'Hello world!' print. Roep deze functie 10x op vanuit de main doormiddel van een for-loop.
*/

#include <stdio.h>

int printHelloWorld();


int main()
{
for(int i = 0; i < 10; i++)
  printHelloWorld(); 
  }


int printHelloWorld()
{
  printf("Hello world!\n");
  return 0;
}
