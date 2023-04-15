#include <stdio.h>
#include <stdlib.h>
#include "questao18.h"

void questao18(void){
    float nota1;
    float nota2;
    float media;
    int contador = 0;

    entrada18( &nota1, &nota2);

    processamento18( &nota1, &nota2, &media, &contador);

    saida18(contador);
}

void entrada18(float *nota1, float *nota2){
    printf("Informe as medias: ");
    scanf("%f %f", nota1, nota2);
}

void processamento18( float *nota1, float *nota2, float *media, int *cont){
    *media = (*nota1 + *nota2)/2;

    if (*media >= 7){
        *cont = 1;
    }else if(*media > 3){
        *cont = 2;
    }else{
        return cont;
    }
}

void saida18(int cont){
    if (cont == 1){
        printf("Aprovado!");
    }else if(cont == 2){
        printf("Prova final!");
    }else{
        printf("Reprovado!");
    }
}
