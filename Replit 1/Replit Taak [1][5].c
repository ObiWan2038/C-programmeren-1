/*
    Zorg ervoor dat enkel de geprinte variabelen worden gedeclareerd en worden geinitialiseerd op 42 en -69.
*/

#include <stdio.h>

int main( void )
{
	int  a;
	int  b;
	int  c;
	int  d;

	printf( "De waarde van a = %d & c = %d\n", a, c );
	return 0;
}


/*
    Zorg ervoor dat enkel de geprinte variabelen worden gedeclareerd en worden geinitialiseerd op 42 en -69.
*/

#include <stdio.h>
#include <stdint.h>

int main( void )
{
	int  a;
  a = 42;
	//int  b;
	int  c;
  c = -69;
	//int  d;

	printf( "De waarde van a = %d & c = %d\n", a, c );
	return 0;
}
