/*
    Zorg ervoor dat de variabele "getal" maar 1 byte geheugenruimte inneemt en zowel de grootte als het getal zelf uitprint.
*/

#include <stdio.h>

int main( void )
{
	typeVan1Byte getal = 42;

	printf( "grootte = %d & getal = %lld\n", sizeof( getal ), getal );
	return 0;
}



/*
    Zorg ervoor dat de variabele "getal" maar 1 byte geheugenruimte inneemt en zowel de grootte als het getal zelf uitprint.
*/

#include <stdio.h>
#include <stdint.h>

int main( void )
{
	int8_t getal = 42;


	printf( "grootte = %d & getal = %lld\n", sizeof(getal), getal );

	return 0;
}

Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
