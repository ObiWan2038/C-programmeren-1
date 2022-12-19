#include <stdio.h>
#include <stdint.h>

// Create this !
uint8_t toggleBit( uint8_t data, uint8_t bit )
{
}

int main( void )
{
	uint8_t getal;
	uint8_t bit;
	printf( "Geef een positief geheel getal " );
	(void)scanf( "%hhu", &getal );
	printf( "Zeg welke bit veranderd moet " );
	(void)scanf( "%hhu", &bit );
	printf( "Het resultaat is %hhu\n", toggleBit( getal, bit ) );
	return 0;
}

===========================================================================
  
#include <stdio.h>
#include <stdint.h>

// Create this !
uint8_t toggleBit( uint8_t getal, uint8_t bit )
{
  uint8_t mask = 1 << bit;
  return getal ^ mask;
}

int main( void )
{
	uint8_t getal;
	uint8_t bit;
	printf( "Geef een positief geheel getal " );
	(void)scanf( "%hhu", &getal );
	printf( "Zeg welke bit veranderd moet " );
	(void)scanf( "%hhu", &bit );
	printf( "Het resultaat is %hhu\n", toggleBit( getal, bit ) );
	return 0;
}
