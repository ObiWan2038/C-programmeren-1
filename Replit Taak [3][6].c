#include <stdio.h>

int main( void )
{
	int getal = 0;
	printf( "Geef een geheel getal in : " );
	(void)scanf( "%d", &getal );

	/* test of het getal niet groter is dan 10000 */
	printf( "Het getal is te groot !" );

	int aantal cijfers = 0;

	/*voer een reeks van testen uit, of gebruik een gelinkte conditionele operator voor :
	    tussen de 0 en 10 --> 1 cijfer
	    tussen de 10 en 100 --> 2 cijfers
	    tussen de 100 en 1000 --> 3 cijfers
	    tussen de 1000 en 10000 --> 4 cijfers
	*/

	printf( "Het getal bestaat uit %d cijfers", aantal cijfers );

	return 0;
}


===================================================================================================

#include <stdio.h>

int main( void )
{
	int getal = 0;
	printf( "Geef een geheel getal in : " );
	(void)scanf( "%d", &getal );
	int aantalcijfers = 0;

	/* test of het getal niet groter is dan 10000 */

  if(getal >= 10000){
	printf( "Het getal is te groot !" );
    }


else if ((getal >= 0 && getal < 10)? aantalcijfers = 1: (getal >= 10 && getal < 100)? aantalcijfers = 2: (getal >= 100 && getal < 1000)? aantalcijfers = 3: (getal >= 1000 && getal < 10000)? aantalcijfers = 4 :0)
{


printf( "Het getal bestaat uit %d cijfers", aantalcijfers );
}

return 0;

}
