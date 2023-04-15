#include <stdio.h>
#include <stdlib.h>
#include "questao21.h"

void questao21(void){
    int ordem, menor, medio, maior;

    entrada21( &menor, &medio, &maior);

    processamento21( &ordem, &menor, &medio, &maior);

    saida21( menor, medio, maior);
}

void entrada21( int *men, int *med, int *mai){
    printf("Informe os 3 numeros: ");
    scanf("%d %d %d", men, med, mai);
}

void processamento21(int *ord, int *men, int *med, int *mai){
    if (*men > *mai) {
        *ord = *mai;
        *mai = *men;
        *men = *ord;
    }
    if (*men > *med) {
        *ord = *med;
        *med = *men;
        *men = *ord;
    }
    if (*med > *mai) {
        *ord = *mai;
        *mai = *med;
        *med = *ord;
    }
}

void saida21( int men, int med, int mai){
    printf("%d %d %d", men, med, mai);
}
