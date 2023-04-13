#include <stdio.h>
#include <stdlib.h>
#include "questao07.h"

void questao07(void){
    float raio;
    float diametro;
    float perimetro;
    float area;
    float esfera;
    float pi;

    entrada07(&raio);

    processamento07( &raio, &diametro, &perimetro, &area , &esfera, &pi);

    saida07( &diametro, &perimetro, &area, &esfera);
}

void entrada07( float *r){
    printf("Informe o raio do circulo: ");
    scanf("%f", r);
}

void processamento07( float *r, float *dia, float *per, float *ar, float *volume, float *pi){
    *pi = 3.14;
    *dia = *r * 2;
    *per = (*pi * 2) * *r;
    *ar = *pi * (*r * *r);
    *volume = ((4 * *pi) * (*r * *r * *r)) / 3;
}

void saida07( float dia, float per, float ar, float volume){
    printf("O adiametro do circulo eh: %.2f\n", dia);
    printf("O perimetro do circulo eh: %.2f\n", per);
    printf("A area do circulo eh: %.2f\n", ar);5
    printf("O volume caso fosse uma esfera: %.2f\n", volume);
}
