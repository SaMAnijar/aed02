#include <stdio.h>
#include <stdlib.h>
#define numv 5

//numv == TAMANHO DO VETOR!

//criei um vetor para cada metodo, para que quando acontecesse alguma alteração em algum metodo não interferisse no proximo metodo!

int main(){
    int vetor[numv], vetorb[numv], vetori[numv], vetors[numv];
    int posicao;

    printf("Informe 5 numeros para serem ordenados em ordem crescente: \n");
    for(posicao = 0; posicao < numv; posicao++){
        scanf(" %d", &vetor[posicao]);
    }
    system("cls");

    printf("Ordem atual dos numeros que foram digitados no vetor: ");
    for(posicao = 0; posicao < numv; posicao++){
        printf("%d  ", vetor[posicao]);
    }
    printf("\n");

    for(posicao = 0; posicao < numv; posicao++){
        vetorb[posicao] = vetor[posicao];
    }

    bolha( vetorb);

    for(posicao = 0; posicao < numv; posicao++){
        vetori[posicao] = vetor[posicao];
    }

    insercao( vetori);

    for(posicao = 0; posicao < numv; posicao++){
        vetors[posicao] = vetor[posicao];
    }

    selecao( vetors);

    return 0;
}

void bolha(int vetorb[]){
    int contador, aux, posicao;

    for(contador = 1; contador < numv; contador++){
        for(posicao = 0; posicao < numv - 1; posicao++){
            if(vetorb[posicao] > vetorb[posicao + 1]){
                aux = vetorb[posicao];
                vetorb[posicao] = vetorb[posicao + 1];
                vetorb[posicao + 1] = aux;
            }
        }
    }
    printf("\nOrdem dos numeros no vetor atraves do metodo bolha: ");
    for( posicao = 0; posicao < numv; posicao++){
        printf("%d  ", vetorb[posicao]);
    }
    printf("\n");
}

void insercao(int vetori[]){
    int antecessor, aux, posicao;

    for(posicao = 0; posicao < numv - 1; posicao++){
        if(vetori[posicao] > vetori[posicao + 1]){
            aux = vetori[posicao + 1];
            vetori[posicao + 1] = vetori[posicao];
            vetori[posicao] = aux;

            antecessor = posicao - 1;

            while(antecessor >= 0){
                if(aux < vetori[antecessor]){
                    vetori[antecessor + 1] = vetori[antecessor];
                    vetori[antecessor] = aux;
                }else{
                    break;
                }
                antecessor = antecessor - 1;
            }
        }
    }

    printf("\nOrdem dos numeros no vetor atraves do metodo de insercao: ");
    for( posicao = 0; posicao < numv; posicao++){
        printf("%d  ", vetori[posicao]);
    }
    printf("\n");
}

void selecao(int vetors[]){
    int contador, aux, posicao, menor;

    menor = vetors[0];

    for(contador = 0; contador < numv; contador++){
        menor = contador;
        for(posicao = contador + 1; posicao < numv; posicao++){
            if(vetors[menor] > vetors[posicao]){
                menor = posicao;
            }
        }
        if(contador != menor){
            aux = vetors[contador];
            vetors[contador] = vetors[menor];
            vetors[menor] = aux;
        }
    }
    printf("\nOrdem dos numeros no vetor atraves do metodo de selecao: ");
    for( posicao = 0; posicao < numv; posicao++){
        printf("%d  ", vetors[posicao]);
    }
    printf("\n");
}
