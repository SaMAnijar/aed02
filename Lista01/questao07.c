#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "questao07.h"

void questao07(void){
    float raio;
    float diametro;
    float perimetro;
    float area;
    float volume;

    entrada07(&raio);

    processamento07( &raio, &diametro, &perimetro, &area , &volume);

    saida07( &diametro, &perimetro, &area, &volume);
}

void entrada07( float *r){
    printf("Informe o raio do circulo: ");
    scanf("%f", r);
}

void processamento07( float *r, float *dia, float *per, float *ar, float *vol){
    *dia = *r * 2;
    *per = 2 * 3.14 * *r;
    *ar = 3.14 * (pow(*r,2));
    *vol = ((4 * 3.14) * (pow(*r,3))) / 3;
}

void saida07( float *dia, float *per, float *ar, float *vol){
    printf("O diametro do circulo eh: %.2f\n", *dia);
    printf("O perimetro do circulo eh: %.2f\n", *per);
    printf("A area do circulo eh: %.2f\n", *ar);
    printf("O volume caso fosse uma esfera: %.2f\n", *vol);
}
