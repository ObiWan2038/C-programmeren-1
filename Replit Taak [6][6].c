// # Diamond Chase
// 
// We hebben een "chunk" in een spel met de volgende seed;
// `1870652620`. We weten ook dat binnen deze seeds op coördinaat 4 6 42
// (XYZ) één diamant zit. De opdracht is nu om alle andere diamanten
// binnen deze seeds te vinden. De 3D array stelt de X, Y, en Z assen
// voor in deze chunk.
// 
// Good luck!
// 
// 
// ## Output van het programma
// 
// We verwachten de volgende output van het programma. Kijk goed naar de
// formatting!
// 
// ```
// Diamond ID = 420
// Diamond @   0,  0,  70
// Diamond @  14,  6, 252
// Diamond @  15, 15, 217
// There are 3 diamonds in this chunk
// ```

#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

#define CHUNK_WIDTH ( 16u )
#define CHUNK_LENGTH ( 16u )
#define CHUNK_HEIGHT ( 384u )
#define CHUNK_SEED ( 1870652620L )

int main( void )
{
	uint8_t chunk[CHUNK_WIDTH][CHUNK_LENGTH][CHUNK_HEIGHT];

	srand( CHUNK_SEED );

	for( uint8_t x = 0; x < CHUNK_WIDTH; x++ )
	{
		for( uint8_t y = 0; y < CHUNK_LENGTH; y++ )
		{
			for( uint16_t z = 0; z < CHUNK_HEIGHT; z++ )
			{
				chunk[x][y][z] = rand() % 256;
			}
		}
	}

	//---
	// HINT : Your code here !
	//---

	printf( "There are %d diamonds in this chunk\n", count );

	return 0;
}



=======================================================================================


#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

#define CHUNK_WIDTH ( 16u )
#define CHUNK_LENGTH ( 16u )
#define CHUNK_HEIGHT ( 384u )
#define CHUNK_SEED ( 1870652620L )

int main( void )
{
    uint8_t chunk[CHUNK_WIDTH][CHUNK_LENGTH][CHUNK_HEIGHT];
  int teller=0;
    srand( CHUNK_SEED );

    for( uint8_t x = 0; x < CHUNK_WIDTH; x++ )
    {
        for( uint8_t y = 0; y < CHUNK_LENGTH; y++ )
        {
            for( uint16_t z = 0; z < CHUNK_HEIGHT; z++ )
            {
                chunk[x][y][z] = rand() % 256;
            }
        }
    }
  printf("Diamond ID = %d\n",56);
  for(int xx=0; xx<16;xx++)
  {
   for(int yy=0; yy<16;yy++)
    {
      for(int zz=0; zz<384;zz++)
      {
        if(chunk[xx][yy][zz]==56)
        {
          printf("Diamond @  %2d,%3d,%4d\n",xx,yy,zz);
          teller++;
        }
      }
   }
  }
  printf("There are %d diamonds in this chunk\n",teller); 
    return 0;
}
