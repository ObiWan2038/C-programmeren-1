// Schrijf een C programma dat de het meest voorkomend character in de joke uitprint, en hoe vaak dit character voorkomt.
// HINT: De ASCII tabel bestaat uit 128 characters. Jullie weten ook wat een cumulatieve tabel is.
//
// Verwachte output:
// Het character 'x' is het meest voorkomende character, ze komt n keer voor.

#include <stdio.h>

#include "joke.h"

int main( void )
{
	return 0;
}

======================================================================
  
// Schrijf een C programma dat de het meest voorkomend character in de joke uitprint, en hoe vaak dit character voorkomt.
// HINT: De ASCII tabel bestaat uit 128 characters. Jullie weten ook wat een cumulatieve tabel is.
//
// Verwachte output:
// Het character 'x' is het meest voorkomende character, ze komt n keer voor.

#include <stdio.h>
#include <string.h>

#include "joke.h"
#define SIZE 128

int main( void )
{
  int counter[SIZE] = {0};
  int x = 0;
  for(size_t i = 0; i< strlen(joke); i++){
    counter[(int)joke[i]]++;
  }
  for(int i = 0; i < SIZE; i++){
    if(counter[i]>counter[x]){
      x = i;
    }

 
  }
  printf("Het character '%c' is het meest voorkomende character, ze komt %d keer voor.\n", x, counter[x]);
	return 0;
}
