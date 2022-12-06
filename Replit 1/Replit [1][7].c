/*
    Zorg ervoor dat de naamgevingen overal juist zijn, zodat de code hieronder kan compileren.
*/

#include <stdio.h>

#define DIT_IS_DE_VASTE_WAARDE 27

int main( void )
{
	unsigned short int 1steWaarde = DIT IS DE VASTE WAARDE;
	signed long int 2deWaarde = DIT-IS-DE-VASTE-WAARDE;
	1steWaarde = eersteWaarde + 15;
	2deWaarde = - eersteWaarde - tweedeWaarde;

	printf( "Het eerste getal = %d\nHet tweede getal = %d\n", EersteWaarde, TweedeWaarde );
	return 0;
}



/*
    Zorg ervoor dat de naamgevingen overal juist zijn, zodat de code hieronder kan compileren.
*/

#include <stdio.h>

#define DIT_IS_DE_VASTE_WAARDE  27

int main( void )
{
	unsigned short int _1steWaarde = DIT_IS_DE_VASTE_WAARDE;
	signed long int _2deWaarde = DIT_IS_DE_VASTE_WAARDE;
	_1steWaarde = _1steWaarde + 15;
	_2deWaarde = - _1steWaarde - _2deWaarde;

	printf( "Het eerste getal = %d\nHet tweede getal = %d\n", _1steWaarde, _2deWaarde );
	return 0;
}
