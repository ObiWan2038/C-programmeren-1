#include <stdio.h>
#include <stdint.h>

// Create this !
uint8_t getRangeBits( uint8_t data, uint8_t fromBit, uint8_t toBit )
{
}

int main( void )
{
	uint8_t getal;
	uint8_t bitStart;
	uint8_t bitStop;
	printf( "Geef een positief geheel getal " );
	(void)scanf( "%hhu", &getal );
	printf( "Zeg van en tot welke bit je wil lezen " );
	(void)scanf( "%hhu %hhu", &bitStart, &bitStop );
	printf( "Het resultaat is %hhu\n", getRangeBits( getal, bitStart, bitStop ) );
	return 0;
}


==============================================================================
  
#include <stdio.h>
#include <stdint.h>

// Create this !
uint8_t getRangeBits(uint8_t data, uint8_t fromBit, uint8_t toBit)
{
    uint8_t mask = (1 << (toBit - fromBit + 1)) - 1;
    return (data >> fromBit) & mask;
}


int main( void )
{
	uint8_t getal;
	uint8_t bitStart;
	uint8_t bitStop;
	printf( "Geef een positief geheel getal " );
	(void)scanf( "%hhu", &getal );
	printf( "Zeg van en tot welke bit je wil lezen " );
	(void)scanf( "%hhu %hhu", &bitStart, &bitStop );
	printf( "Het resultaat is %hhu\n", getRangeBits( getal, bitStart, bitStop ) );
	return 0;
}
