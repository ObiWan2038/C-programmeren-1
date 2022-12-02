Maak een cummulatieve tabel die bijhoudt hoe vaak een gebruiker een geheel getal tussen 0 en 20 ingeeft. Als een gebruiker een getal kleiner dan 0 of groter dan 20 ingeeft stopt het programma en wordt de cumulatieve tabel als volgt geprint:



#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 21
#define STUD 1000

int main(void) {
    srand(time(NULL));
    int list[MAX];
    int studenten [STUD];

    for (int i = 0; i < STUD; i++){
        studenten[i] = rand() % MAX;
        list[studenten[i]]++;
    }

for (int i = 0; i < MAX; i++){
    printf("%2d:", i);
    for (int j = 0; j < studenten[i]; j++){
        printf("*");    
    }
    printf("\n");
}
}

