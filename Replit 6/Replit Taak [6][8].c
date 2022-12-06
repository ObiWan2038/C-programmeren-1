#include <stdio.h>
#include <math.h>

int main( void )
{
	float cosinus[360];
	float sinus[360];
	float tangens[360];

	float resultaat1 = 0;
	float resultaat2 = 0;
	float resultaat3 = 0;

	for( int i = 0; i < 360; i++ )
	{
		cosinus[i] = cos( i * M_PI / 180 );
		sinus[i] = sin( i * M_PI / 180 );
		tangens[i] = tan( i * M_PI / 180 );
	}

	// Bereken de aanliggende zijde van een rechthoekige driehoek waarvan de schuine zijde gelijk is aan 4.56 en de hoek tussen de aanliggende en schuine zijde 46 graden is.
	// Maak gebruik van de cosinus lookup tabel en sla het resultaat op in de variabele resultaat1.
	printf( "De aanliggende zijde = %f\n", resultaat1 );

	// Bereken de overstaande zijde van de bovenstaande rechthoekige driehoek. Maak gebruik van de sinus lookup tabel en sla het resultaat op in de variabele resultaat2.
	printf( "De overstaande zijde = %f\n", resultaat2 );

	// Bereken de aanliggende zijde van de bovenstaande rechthoekige driehoek. Maak deze keer gebruik van de tangens lookup tabel en sla het resultaat op in de variabele resultaat3.
	printf( "De aanliggende zijde = %f\n", resultaat3 );

	return 0;
}


=========================================================================================

#include <stdio.h>
#include <math.h>


int main( void )
{
	
	float sinus[360];
	float tangens[360];
  float cosinus[360];
	float resultaat1 = 0;
	float resultaat2 = 0;
	float resultaat3 = 0;

	for( int i = 0; i < 360; i++ )
	{
		cosinus[i] = cos( i * M_PI / 180 );
		sinus[i] = sin( i * M_PI / 180 );
		tangens[i] = tan( i * M_PI / 180 );
	}


 //0.694658
	// Bereken de aanliggende zijde van een rechthoekige driehoek waarvan de schuine zijde gelijk is aan 4.56 en de hoek tussen de aanliggende en schuine zijde 46 graden is.
	// Maak gebruik van de cosinus lookup tabel en sla het resultaat op in de variabele resultaat1.

  /*for(int i = 0; i < 360; i++){
    printf("tangens[%d] = %f\n", i, tangens[i]);
    }
*/
  
  resultaat1 = cosinus[46] * 4.56;
	printf( "De aanliggende zijde = %f\n", resultaat1 );

	// Bereken de overstaande zijde van de bovenstaande rechthoekige driehoek. Maak gebruik van de sinus lookup tabel en sla het resultaat op in de variabele resultaat2.

  resultaat2 = sinus[46] * 4.56;
	printf( "De overstaande zijde = %f\n", resultaat2 );

	// Bereken de aanliggende zijde van de bovenstaande rechthoekige driehoek. Maak deze keer gebruik van de tangens lookup tabel en sla het resultaat op in de variabele resultaat3.
 
 resultaat3 = tangens[44] * resultaat2;
	printf( "De aanliggende zijde = %f\n", resultaat3 );

	return 0;
}

