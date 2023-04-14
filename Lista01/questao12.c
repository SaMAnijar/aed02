#include <stdio.h>
#include <stdlib.h>
#include "questao12.h"

void questao12(void){
    float nota1, nota2, media;
    printf("Informe as duas notas do aluno para saber se ele foi aprovado ou nao: ");
    scanf("%f %f", &nota1, &nota2);

    media = (nota1 + nota2)/2;

    if (media >= 7){
        printf("Aprovado!");
    }
    else{
        printf("Reprovado!");
    }
}
