/*
    Zorg ervoor dat de variabele die gebruikt wordt wel aangepast mag worden en nadien als een hexadecimaal getal uitgeprint wordt.
*/

#include <stdio.h>

int main( void )
{
	const int getal;

	printf( "Geef een getal in : " );
	scanf("%d", &getal);

	printf( "De hexadecimale versie van het getal = %#d\n", getal );
	return 0;
}


/*
    Zorg ervoor dat de variabele die gebruikt wordt wel aangepast mag worden en nadien als een hexadecimaal getal uitgeprint wordt.
*/

#include <stdio.h>

int main( void )
{
	int getal;

  getal = 0;

	printf( "Geef een getal in : " );
	scanf("%d", &getal);

	printf( "De hexadecimale versie van het getal = %#x\n", getal );
	return 0;
}
