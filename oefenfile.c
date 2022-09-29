#include <stdio.h>

int main()
{
    float A = 12.3;
    float B = 14.5;
    float C = 15.8;
    float D = 8.3;
    float E = 4.5;

    float gem = (A+B+C+D+E)/5;

    printf("%f \n",gem);

    if(gem >= 10)
    {
        printf("Geslaagd! \n");
    }

    else
    {
        printf("Niet geslaagd \n");

    }


}
