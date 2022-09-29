#include <stdio.h>


int main()

{

    int hvlLoop = 0;
    printf("Runnen? \n");

    while (getch()=='y')

    {
       //nieuwe variabele

        int rando = 0;
        printf("Welk getal wil je controleren? \n");
        scanf("%d", &rando);

        if(rando %2 == 0)
       {
         printf("Even! \n");
       }
       else
       {
           printf("Oneven \n");
       }
        printf("Nog eens? \n");
    }
return (0);
}
