

/*
    Zorg ervoor dat de variabele "getal" maar 8 bytes geheugenruimte inneemt en zowel de grootte als het getal zelf uitprint.
*/

#include <stdio.h>

int main( void )
{
	typeVan8Bytes getal = -0xdadab00b135;

	printf( "grootte = %d & getal = %lld\n", sizeof( getal ), getal );
	return 0;
}

/*
    Zorg ervoor dat de variabele "getal" maar 8 bytes geheugenruimte inneemt en zowel de grootte als het getal zelf uitprint.
*/

#include <stdio.h>
#include <stdint.h>

int main( void )
{
	int64_t getal = -0xdadab00b135;

	printf( "grootte = %x & getal = %lld\n", sizeof( getal ), getal );
	return 0;
}
