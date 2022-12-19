#include <stdio.h>
#include <stdint.h>

// Create this !
uint32_t pow2( uint8_t exp )
{
}

int main( void )
{
	uint8_t getal;
	printf( "Geef een positief geheel getal " );
	(void)scanf( "%hhu", &getal );
	printf( "2 tot de macht %hhu = %u\n", getal, pow2( getal ) );
	return 0;
}

==========================================================================
  
#include <stdio.h>
#include <stdint.h>

// Create this !
uint32_t pow2( uint8_t getal )
{
  uint32_t result = 1;

  for(int i = 0; i < getal; i++){
    result *= 2;
  }
  return result;
}

int main( void )
{
	uint8_t getal;
	printf( "Geef een positief geheel getal " );
	(void)scanf( "%hhu", &getal );
	printf( "2 tot de macht %hhu = %u\n", getal, pow2( getal ) );
	return 0;
}
