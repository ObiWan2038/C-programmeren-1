#include <stdio.h>
#include <stdint.h>

// Fix it !
int main( void )
{
	uint64_t bigNumber = ( 1 << 42 );

	printf( "Getal = %lu\n", bigNumber );
	return 0;
}

==================================================================
  
  
#include <stdio.h>
#include <stdint.h>

// Fix it !
int main( void )
{
	uint64_t bigNumber = ( 1ull << 42 );

	printf( "Getal = %lu\n", bigNumber );
	return 0;
}
