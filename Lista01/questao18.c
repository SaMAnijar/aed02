#include <stdio.h>
#include <stdlib.h>
#include "questao18.h"

void questao18(void){
    float nota1;
    float nota2;
    float media;

    printf("Informe as medias: ");
    scanf("%f %f", &nota1, &nota2);

    media = (nota1 + nota2)/2;

    if (media >= 7){
        printf("Aprovado!");
    }else if(media > 3){
        printf("Prova final!");
    }else{
        printf("Reprovado!");
    }
}
