/*
    Zorg ervoor dat de variabele "getal" maar 2 bytes geheugenruimte inneemt en zowel de grootte als het getal zelf uitprint.
*/

#include <stdio.h>


int main( void )
{
	getalvan2bytes = 0x4242;

	printf( "grootte = %x & getal = %lld\n", sizeof( getal ), getal );
	return 0;
}






/*
    Zorg ervoor dat de variabele "getal" maar 2 bytes geheugenruimte inneemt en zowel de grootte als het getal zelf uitprint.
*/

#include <stdio.h>
#include <stdint.h>

int main( void )
{
	int16_t getal = 0x4242;

	printf( "grootte = %x & getal = %lld\n", sizeof( getal ), getal );
	return 0;
}
