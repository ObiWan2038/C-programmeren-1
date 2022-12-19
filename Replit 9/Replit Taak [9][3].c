#include <stdio.h>
#include <stdint.h>

// Create this !
uint8_t getBit( uint8_t data, uint8_t bit )
{
}

int main( void )
{
	uint8_t getal;
	uint8_t bit;
	printf( "Geef een positief geheel getal " );
	(void)scanf( "%hhu", &getal );
	printf( "Zeg welke bit je wil lezen " );
	(void)scanf( "%hhu", &bit );
	printf( "Het resultaat is %hhu\n", getBit( getal, bit ) );
	return 0;
}

=======================================================================================================

#include <stdio.h>
#include <stdint.h>

// Create this !
uint8_t getBit( uint8_t getal, uint8_t bit )
{
  uint8_t mask = 1 << bit;
  return (getal & mask) != 0;
}

int main( void )
{
	uint8_t getal;
	uint8_t bit;
	printf( "Geef een positief geheel getal " );
	(void)scanf( "%hhu", &getal );
	printf( "Zeg welke bit je wil lezen " );
	(void)scanf( "%hhu", &bit );
	printf( "Het resultaat is %hhu\n", getBit( getal, bit ) );
	return 0;
}
