#include <stdio.h>
#include <stdlib.h>
#include "questao03.h"

void questao03(void){
    float nota1;
    float nota2;
    int peso1;
    int peso2;
    float resultado;

    entrada03( &nota1, &peso1, &nota2, &peso2);

    processamento03( &nota1, &peso1, &nota2, &peso2, &resultado);

    saida03(&resultado);
}

void entrada03(float *not1, int *pes1, float *not2, int *pes2){
    printf("Informe a primeira nota: ");
    scanf("%f", not1);
    printf("Informe o peso da nota1: ");
    scanf("%d", pes1);
    printf("Informe a segunda nota: ");
    scanf("%f", not2);
    printf("Informe o peso da nota2: ");
    scanf("%d", pes2);
}

void processamento03(float *not1, int *pes1, float *not2, int *pes2, float *media){
        *media = ((*not1 * *pes1) + (*not2 * *pes2)) / (*pes1 + *pes2);
}

void saida03(float resultado){
    printf("Resultado da media ponderada do aluno: %.2f", resultado);
}
