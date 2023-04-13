#include <stdio.h>
#include <stdlib.h>
#include "questao04.h"

void questao04(void){
    float salarioinicial;
    float aumento;
    float novosalario;

    entrada04( &salarioinicial, &aumento);

    processamento04( &salarioinicial, &aumento, &novosalario);

    saida04( &novosalario);
}

void entrada04( float *salarioini, float *aument){
    printf("Informe o salario inicial: R$");
    scanf("%f", salarioini);
    printf("Informe o aumento: %");
    scanf("%f", aument);
}

void processamento04( float *salarioini, float *aument, float *novosal){
    *novosal = *salarioini + ((*salarioini * *aument)/100);
}

void saida04( float resultado){
    printf("O salario novo eh: R$%.2f", resultado);
}
