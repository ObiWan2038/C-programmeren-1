#include <stdio.h>
#include <stdint.h>

void print_byte( uint8_t byte )
{
	static const char *nibble_lookup[16] = { [0x0] = "0000", [0x1] = "0001", [0x2] = "0010", [0x3] = "0011", [0x4] = "0100", [0x5] = "0101", [0x6] = "0110", [0x7] = "0111",
	                                         [0x8] = "1000", [0x9] = "1001", [0xA] = "1010", [0xB] = "1011", [0xC] = "1100", [0xD] = "1101", [0xE] = "1110", [0xF] = "1111" };
	printf( "%s %s", nibble_lookup[byte >> 4], nibble_lookup[byte & 0x0F] );
}

int main( void )
{
	uint8_t alfa = 42;
	uint8_t beta = 169;
	uint8_t gamma = 69;

	// Binair printen
	printf( "\n\n%3d ==> ", alfa );
	print_byte( alfa );

	printf( "\n\n%3d ==> ", beta );
	print_byte( beta );

	printf( "\n\n%3d ==> ", gamma );
	print_byte( gamma );

	getchar();

	// Inverse operator (NOT)
	printf( "\n\n%3d ==> ", alfa );
	print_byte( alfa );

	printf( "\nNOT ==> " );
	print_byte( ~alfa );

	printf( "\n\n%3d ==> ", beta );
	print_byte( beta );

	printf( "\nNOT ==> " );
	print_byte( ~beta );

	printf( "\n\n%3d ==> ", gamma );
	print_byte( gamma );

	printf( "\nNOT ==> " );
	print_byte( ~gamma );

	getchar();

	// OR operator
	printf( "\n\n%3d ==> ", alfa );
	print_byte( alfa );
	printf( "\n%3d ==> ", beta );
	print_byte( beta );

	printf( "\n OR ==> " );
	print_byte( alfa | beta );

	printf( "\n\n%3d ==> ", alfa );
	print_byte( alfa );
	printf( "\n%3d ==> ", gamma );
	print_byte( gamma );

	printf( "\n OR ==> " );
	print_byte( alfa | gamma );

	getchar();

	// AND operator
	printf( "\n\n%3d ==> ", alfa );
	print_byte( alfa );
	printf( "\n%3d ==> ", beta );
	print_byte( beta );

	printf( "\nAND ==> " );
	print_byte( alfa & beta );

	printf( "\n\n%3d ==> ", alfa );
	print_byte( alfa );
	printf( "\n%3d ==> ", gamma );
	print_byte( gamma );

	printf( "\nAND ==> " );
	print_byte( alfa & gamma );

	getchar();

	// XOR operator
	printf( "\n\n%3d ==> ", alfa );
	print_byte( alfa );
	printf( "\n%3d ==> ", beta );
	print_byte( beta );

	printf( "\nXOR ==> " );
	print_byte( alfa ^ beta );

	printf( "\n\n%3d ==> ", alfa );
	print_byte( alfa );
	printf( "\n%3d ==> ", gamma );
	print_byte( gamma );

	printf( "\nXOR ==> " );
	print_byte( alfa ^ gamma );

	getchar();

	// BITMASK filter
	uint8_t getal = 42;
	uint8_t mask = 1;
	while( mask )
	{
		printf( "\n\n%3d ==> ", getal );
		print_byte( getal );
		printf( "\n Filter Mask ? " );
		(void)scanf( "%hhx", &mask );
		printf( "%3d ==> ", mask );
		print_byte( mask );
		getal &= mask;
		printf( "\nAND ==> " );
		print_byte( getal );
	}

	// BITMASK set
	getal = 42;
	mask = 1;
	while( mask )
	{
		printf( "\n\n%3d ==> ", getal );
		print_byte( getal );
		printf( "\n Set Mask ? " );
		(void)scanf( "%hhx", &mask );
		printf( "%3d ==> ", mask );
		print_byte( mask );
		getal |= mask;
		printf( "\n OR ==> " );
		print_byte( getal );
	}

	// BITMASK toggle
	getal = 42;
	mask = 1;
	while( mask )
	{
		printf( "\n\n%3d ==> ", getal );
		print_byte( getal );
		printf( "\n Toggle Mask ? " );
		(void)scanf( "%hhx", &mask );
		printf( "%3d ==> ", mask );
		print_byte( mask );
		getal ^= mask;
		printf( "\nXOR ==> " );
		print_byte( getal );
	}

	return 0;
}
