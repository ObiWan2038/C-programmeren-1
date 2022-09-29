#include <stdio.h>




int main()

{
    for (int hoeveel = 0; hoeveel < 10; hoeveel = hoeveel + 1)
    {


        int geluidswaarde = 0;

        printf("Wat is het geluidsniveau in dB? \n");
        scanf("%d",&geluidswaarde);

        if(geluidswaarde <=50)
        {
           printf("quiet \n");
        }

        else if(geluidswaarde >51 && geluidswaarde <70)
        {
            printf("intrusive \n");
        }

        else if (geluidswaarde >71 && geluidswaarde <90)
        {
            printf("annoying \n");
        }

        else if (geluidswaarde>91 && geluidswaarde <110)
        {
            printf("very annoying \n");
        }
        else if (geluidswaarde > 110)
        {
            printf("uncomfortable \n");
        }
        else
        {
            printf("Error \n");
        }
    }
return (0);
}


