#include <stdio.h>
#include <stdlib.h>
#include "questao08.h"

void questao08(void){
    float kilometrohora;
    float conversao;

    entrada08( &kilometrohora);

    processamento08( &kilometrohora, &conversao);

    saida08(&conversao);
}

void entrada08( float *kmh){
    printf("Informe a velocidade do veiculo em Km/h: ");
    scanf("%f", kmh);
}

void processamento08( float *kmh, float *conv){
    *conv = *kmh / 3.6;
}

void saida08( float resultado){
    printf("A velocidade do veiculo em Metro por segundos eh: %.1fm/s", resultado);
}
