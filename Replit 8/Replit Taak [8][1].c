/*
  Fix it!
*/

#include <stdio.h>

int main( void )
{
	printf( "Hello President\n" );
	while( 1 )
	{
		printf( "Wilt u de bom lanceren ? [j/n] " );
		char input;
		(void)scanf( " %c", input );
		switch( input )
		{
		case j:
		case J:
		case y:
		case Y:
			printf( "\n     _.-^^---....,,--       \n _--                  --_  \n<                        >)\n|                         | \n \\._                   _./  \n    ```--. . , ; .--'''       \n          | |   |             \n       .-=||  | "
			        "|=-.   \n       `-=#$%&%$#=-'   \n          | ;  :|     \n _____.,-#%&$@%#&#~,._____\n" );
			return 1;
		case n:
		case N:
		case c:
		case C:
			return 0;
		}
	}
	return -1;
}

====================================================================================================================================

/*
  Fix it!
*/

#include <stdio.h>

int main( void )
{
	printf( "Hello President\n" );
	while( 1 )
	{
		printf( "Wilt u de bom lanceren ? [j/n] " );
		char input;
		(void)scanf( " %c", &input );
		switch( input )
		{
		case 'j':
    
      
		case 'J':
      
      
		case 'y':
      
      
		case 'Y':
			printf( "\n     _.-^^---....,,--       \n _--                  --_  \n<                        >)\n|                         | \n \\._                   _./  \n    ```--. . , ; .--'''       \n          | |   |             \n       .-=||  | "
			        "|=-.   \n       `-=#$%&%$#=-'   \n          | ;  :|     \n _____.,-#%&$@%#&#~,._____\n" );
			return 0;
      break;
      
      case 'N':
      return 0;
      break;

      case 'n':
      return 0;
      break;
    
      default:
      break;
      return 1;
		}
	}
	return 0;
}

  
