#include <stdio.h>
#include <stdint.h>

// Create this !
uint8_t countBits( uint8_t data )
{
}

int main( void )
{
	uint8_t getal;
	printf( "Geef een positief geheel getal " );
	(void)scanf( "%hhu", &getal );
	printf( "Het getal bevat %hhu bits\n", countBits( getal ) );
	return 0;
}

================================================================================================

#include <stdio.h>
#include <stdint.h>

// Create this !
uint8_t countBits( uint8_t getal )
{
  uint8_t count = 0;
  for(int i = 0; i < 8; i++){
    if((getal & (1 << i)) != 0){
      count++;
    }
  }
  return count;
}

int main( void )
{
	uint8_t getal;
	printf( "Geef een positief geheel getal " );
	(void)scanf( "%hhu", &getal );
	printf( "Het getal bevat %hhu bits\n", countBits( getal ) );
	return 0;
}
