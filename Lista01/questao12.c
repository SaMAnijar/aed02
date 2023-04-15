#include <stdio.h>
#include <stdlib.h>
#include "questao12.h"

void questao12(void){
    float nota1, nota2, media;

    entrada12( &nota1, &nota2);

    processamento12( &nota1, &nota2, &media);

    saida12( &media);
}

void entrada12( float *nota1, float *nota2){
    printf("Informe as duas notas do aluno para saber se ele foi aprovado ou nao: ");
    scanf("%f %f", &nota1, &nota2);
}

void processamento12(float *nota1, float *nota2, float *media){
     *media = (*nota1 + *nota2) / 2;
}

void saida12(float *media){
    if (media >= 7){
        printf("Aprovado!");
    }
    else{
        printf("Reprovado!");
    }
}
