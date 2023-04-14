#include <stdio.h>
#include <stdlib.h>
#include "questao16.h"

void questao16(void){
    float salariobruto;
    float salarioliquido;

    printf("Informe o salario bruto para calcular o salario liquido: ");
    scanf("%f", &salariobruto);

    if (salariobruto < 2000){
        salarioliquido = salariobruto - (salariobruto * 0.1);
        printf("O salario liquido eh: R$%.2f.", salarioliquido);
    }
    else{
        salarioliquido = salariobruto - (salariobruto * 0.2);
        printf("O salario liquido eh: R$%.2f.", salarioliquido);
    }
}
