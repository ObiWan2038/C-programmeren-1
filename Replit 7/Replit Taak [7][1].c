#include <stdio.h>

int main( void )
{
	// declare input
	printf( "Geef een woord : " );
	(void)scanf( "%s", input );
	printf( "Dit woord bevat %d characters.\n", /*string length of input*/ );
	return 0;
}

======================================================================================
  
  #include <stdio.h>
#include <string.h> 

int main( void )
{
    char input[50];
    printf( "Geef een woord : " );
    (void)scanf( "%s", input );
    printf( "Dit woord bevat %lu characters.\n", strlen(input) );
    return 0;
}
