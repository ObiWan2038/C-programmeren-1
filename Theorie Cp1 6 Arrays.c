#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 32
#define WIDTH 42
#define HEIGTH 24

int main( void )
{
	srand( time( NULL ) );

	// Just a bunch of variables
	int number1 = 42;
	int number2 = 69;
	int number3 = 0x42;
	int number4 = 042;
	printf( "Numbers : %d, %d, %d, %d\n", number1, number2, number3, number4 );
	getchar();

	// Array
	int number[4];
	number[0] = 42;
	number[1] = 69;
	number[2] = 0x42;
	number[3] = 042;
	printf( "number[] : %d, %d, %d, %d\n", number[0], number[1], number[2], number[3] );
	getchar();

	// Array initialization
	int numberInit[4] = { 42, 69, 0x42, 042 };
	printf( "numberInit[] : %d, %d, %d, %d\n", numberInit[0], numberInit[1], numberInit[2], numberInit[3] );
	getchar();

	// Array unknown size
	int numberUnknownSize[] = { 42, 69, 0x42, 042 };
	printf( "numberUnknownSize[] : %d, %d, %d, %d\n", numberUnknownSize[0], numberUnknownSize[1], numberUnknownSize[2], numberUnknownSize[3] );
	getchar();

	// Arrays and loops
	int hugeList[1000];
	for( int i = 0; i < 1000; i++ )
	{
		hugeList[i] = rand() % 1000;
	}
	printf( "hugeList[] :" );
	for( int i = 0; i < 1000; i++ )
	{
		printf( " %d,", hugeList[i] );
	}
	printf( "\n" );
	getchar();

	// Sizes
	int array[SIZE];
	for( int i = 0; i < SIZE; i++ )
	{
		array[i] = rand() % 1000;
	}
	printf( "array[] :" );
	for( int i = 0; i < SIZE; i++ )
	{
		printf( " %d,", array[i] );
	}
	printf( "\n" );
	getchar();

#if 0
	// Variable Length Arrays <-- BAD !!!
	int grootte = 0;
	printf( "Welke grootte wil je reserveren ? " );
	(void)scanf( "%d", &grootte );
	int compilerWeetHetNiet[grootte];
	for( int i = 0; i < grootte; i++ )
	{
		compilerWeetHetNiet[i] = rand() % 1000;
	}
	printf( "compilerWeetHetNiet :" );
	for( int i = 0; i < grootte; i++ )
	{
		printf( " %d,", compilerWeetHetNiet[i] );
	}
	printf( "\n" );
	getchar();
#endif

#if 0
	// Const as solution <-- BAD !!!
	const int size = 16;
	int arrayWithConstSize[size];
	for( int i = 0; i < size; i++ )
	{
		arrayWithConstSize[i] = rand() % 1000;
	}
	printf( "arrayWithConstSize[] :" );
	for( int i = 0; i < size; i++ )
	{
		printf( " %d,", arrayWithConstSize[i] );
	}
	printf( "\n" );
	getchar();
#endif

#if 0
	// Out of Bound <-- BAD !!!
	int outOfBound[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	printf( "outOfBound[8] = %d\n", outOfBound[8] );
	getchar();
#endif

	// Type
	float floatingPoints[SIZE];
	for( int i = 0; i < SIZE; i++ )
	{
		floatingPoints[i] = (float)( rand() % 1000 ) / ( rand() % 1000 );
	}
	printf( "floatingPoints[] :" );
	for( int i = 0; i < SIZE; i++ )
	{
		printf( " %.4f,", floatingPoints[i] );
	}
	printf( "\n" );
	getchar();

	// 2D Arrays
	char field[WIDTH][HEIGTH];
	for( int y = 0; y < HEIGTH; y++ )
	{
		for( int x = 0; x < WIDTH; x++ )
		{
			field[y][x] = 'A' + rand() % 26;
		}
	}
	printf( "field[][] :\n" );
	for( int y = 0; y < HEIGTH; y++ )
	{
		for( int x = 0; x < WIDTH; x++ )
		{
			printf( "%c ", field[y][x] );
		}
		printf( "\n" );
	}
	printf( "\n" );
	getchar();

	return 0;
}
