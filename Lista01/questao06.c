#include <stdio.h>
#include <stdlib.h>
#include "questao06.h"

void questao06(void){
    float valorantigo;
    float valornovo;
    float porcetagemaumento;

    entrada06( &valorantigo, &valornovo);

    processamento06( &valorantigo, &valornovo, &porcetagemaumento);

    saida06( &porcetagemaumento);
}

void entrada06( float *vantigo, float *vnovo){
    printf("Informe o valor antigo do produto: R$");
    scanf("%f", vantigo);
    printf("Informe o valor novo do produto: R$");
    scanf("%f", vnovo);
}

void processamento06( float *vantigo, float *vnovo, float *porcetagem){
    *porcetagem = ((*vnovo - *vantigo) / *vantigo) * 100;
}

void saida06( float resultado){
    printf("O aumento em porcentagem do produto foi de: %.1f", resultado);
}
