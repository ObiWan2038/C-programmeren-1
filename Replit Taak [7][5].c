#include <stdio.h>

uint64_t reverse( uint64_t getal );

int main( void )
{
	// declareer spreek als array van string met de woorden "nul", "een", "twee", "drie", "vier", "vijf", "zes", "zeven", "acht" & "negen"
	uint64_t getal;
	printf( "Geef een positief geheel getal : " );
	(void)scanf( "%lu", &getal );
	getal = reverse( getal );
	printf( "U gaf in " );
	while( getal > 0 )
	{
		printf( "%s ", spreek[getal % 10] );
		getal /= 10;
	}
	printf( "\n" );
	return 0;
}

uint64_t reverse( uint64_t getal )
{
	uint64_t reverse = 0;
	while( getal > 0 )
	{
		reverse = ( reverse * 10 ) + ( getal % 10 );
		getal /= 10;
	}
	return reverse;
}

=====================================================================================
  
#include <stdio.h>
#include "stdint.h"

uint64_t reverse( uint64_t getal );

int main( void )
{
    char spreek[][20] = {"nul", "een", "twee", "drie", "vier", "vijf", "zes", "zeven", "acht", "negen"};
  

    uint64_t getal;
    printf( "Geef een positief geheel getal : " );
    (void)scanf( "%lu", &getal );
    getal = reverse( getal );
    printf( "U gaf in " );
    while( getal > 0 )
    {
        printf( "%s ", spreek[getal % 10] );
        getal /= 10;
    }
    printf( "\n" );
    return 0;
}

uint64_t reverse( uint64_t getal )
{
    uint64_t reverse = 0;
    while( getal > 0 )
    {
        reverse = ( reverse * 10 ) + ( getal % 10 );
        getal /= 10;
    }
    return reverse;
}
