// Hoe veel control characters zitter er in de joke?
//
// HINT: https://en.cppreference.com/w/c/string/byte/iscntrl
//
// Verwachte output:
// Er zitten n control characters in de joke.

#include <stdio.h>
#include <stdint.h>

#include "joke.h"

int main( void )
{
	for( uint8_t i = 0; i < sizeof( joke ); i + 1 )
	{
		// printf( "%c", joke[i] ); -> uncomment als je de joke wilt zien. Zet terug in comment voordat je je test runt.
	}

	return 0;
}


=================================================================================
  
// Hoe veel control characters zitter er in de joke?
//
// HINT: https://en.cppreference.com/w/c/string/byte/iscntrl
//
// Verwachte output:
// Er zitten n control characters in de joke.

#include <stdio.h>
#include <stdint.h>
#include "ctype.h"
#include "string.h"
#include "joke.h"

int counter = 0;

int main( void )
{
    for( unsigned int i = 0; i <= strlen(joke) ; i++ )
    {
    if(iscntrl(joke[i]) != 0  ) {
      counter++;
    }
    }
  
  
        //printf( "%c", joke[i] ); /*-> uncomment als je de joke wilt zien. Zet terug in comment voordat je je test runt.*/
    
 printf("Er zitten %d control characters in de joke.", counter);
    return 0;
}
  
