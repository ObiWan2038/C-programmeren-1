## Oefening 1
Maak een lookup tabel voor de sinus functie. Het idee is dat je de sinuswaarde elke graden sampelt en dit van 0 graden tot 360 graden. 




=================================================================================================================================================




#include <stdio.h>
#include <math.h>

#define SIZE 361

int main(){
    double array[SIZE];
    double result[SIZE];

    for(int i=0;i<SIZE;i++){
        array[i] = ((double)i/180)*M_PI;
    }

    for(int i=0;i<SIZE;i++){
        result[i]= sin(array[i]);
    }

    for(int i=0;i<SIZE;i++){
        printf("sin[%d]= %.4lf\n",i,result[i]);
    }
    return 0;
}
