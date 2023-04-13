#include <stdio.h>
#include <stdlib.h>
#include "questao07.h"

void questao07(void){
    float raio;
    float diametro;
    float perimetro;
    float area;
    float esfera;

    entrada07(&raio);

    processamento07( &raio, &diametro, &perimetro, &area , &esfera);

    saida07( &diametro, &perimetro, &area, &esfera);
}

void entrada07( float *ra){
    printf("Informe o raio do circulo: ");
    scanf("%f", *ra);
}

void processamento07( float *ra, float *dia, float *per, float *ar, float *volume){
    *dia = 2 * *ra;
    *per = (2 * 3.14) * *ra;
    *ar = 3.14 * (*ra * *ra);
    *volume = ((4 * 3.14) * ((*ra * *ra)*ra)) / 3;
}

void saida07( float dia, float per, float ar, float volume){
    printf("O adiametro do circulo eh: %.2f\n", dia);
    printf("O perimetro do circulo eh: %.2f\n", per);
    printf("A area do circulo eh: %.2f\n", ar);
    printf("O volume caso fosse uma esfera: %.2f\n", volume);
}
