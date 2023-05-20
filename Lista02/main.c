#include <stdio.h>
#include <stdlib.h>
#define numv 5

//numv == TAMANHO DO VETOR!

//criei um vetor para cada metodo, para que quando acontecesse alguma alteração em algum metodo não interferisse no proximo metodo!

int main(){
    int vetor[numv], vetorb[numv], vetori[numv], vetors[numv], vetorm[numv], vetorq[numv];
    int posicao;

    printf("Informe 5 numeros para serem ordenados em ordem crescente: \n");
    for(posicao = 0; posicao < numv; posicao++){
        scanf(" %d", &vetor[posicao]);
    }
    system("cls");

    printf("Ordem atual dos numeros que foram digitados no vetor: ");
    for(posicao = 0; posicao < numv; posicao++){
        printf("%d ", vetor[posicao]);
    }
    printf("\n");

    for(posicao = 0; posicao < numv; posicao++){
        vetorb[posicao] = vetor[posicao];
    }

    for(posicao = 0; posicao < numv; posicao++){
        vetori[posicao] = vetor[posicao];
    }

    for(posicao = 0; posicao < numv; posicao++){
        vetors[posicao] = vetor[posicao];
    }

    for(posicao = 0; posicao < numv; posicao++){
        vetorm[posicao] = vetor[posicao];
    }

    for(posicao = 0; posicao < numv; posicao++){
        vetorq[posicao] = vetor[posicao];
    }

    bolha( vetorb);

    insercao( vetori);

    selecao( vetors);

    mergesort( vetorm, 0, numv - 1);
    exibirmerge( vetorm);

    quicksort( vetorq, 0, numv - 1);
    exibirquick( vetorq);

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
    printf("\nOrdem dos numeros no vetor atraves do metodo BubbleSort: ");
    for( posicao = 0; posicao < numv; posicao++){
        printf("%d ", vetorb[posicao]);
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

    printf("\nOrdem dos numeros no vetor atraves do metodo de InsertionSort: ");
    for( posicao = 0; posicao < numv; posicao++){
        printf("%d ", vetori[posicao]);
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
    printf("\nOrdem dos numeros no vetor atraves do metodo de SelectionSort: ");
    for( posicao = 0; posicao < numv; posicao++){
        printf("%d ", vetors[posicao]);
    }
    printf("\n");
}

void mergesort(int vetorm[], int inicio, int fim){
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        mergesort(vetorm, inicio, meio);
        mergesort(vetorm, meio + 1, fim);
        merge(vetorm, inicio, meio, fim);
    }
}

void merge(int vetorm[], int inicio, int meio, int fim){
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = vetorm[inicio + i];
    for (j = 0; j < n2; j++)
        R[j] = vetorm[meio + 1 + j];

    i = 0;
    j = 0;
    k = inicio;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vetorm[k] = L[i];
            i++;
        } else {
            vetorm[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        vetorm[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        vetorm[k] = R[j];
        j++;
        k++;
    }
}

void exibirmerge(int vetorm[]) {
    printf("\nOrdem dos numeros no vetor atraves do metodo de MergeSort: ");
    for (int i = 0; i < numv; i++) {
        printf("%d ", vetorm[i]);
    }
    printf("\n");
}

void quicksort(int vetorq[], int inicio, int fim){
    int esquerda, direita, pivo, aux;
    pivo = vetorq[inicio];
    esquerda = inicio;
    direita = fim;

    while(esquerda <= direita){
        while(vetorq[esquerda] < pivo){
            esquerda++;
        }
        while(vetorq[direita] > pivo){
            direita--;
        }
        if(esquerda <= direita){
            aux = vetorq[esquerda];
            vetorq[esquerda] = vetorq[direita];
            vetorq[direita] = aux;
            esquerda++;
            direita--;
        }
    }
    if(direita > inicio){
        quicksort( vetorq, inicio, direita);
    }
    if(esquerda < fim){
        quicksort( vetorq, esquerda, fim);
    }
}

void exibirquick(int vetorq[]) {
    printf("\nOrdem dos numeros no vetor atraves do metodo de QuickSort: ");
    for (int i = 0; i < numv; i++) {
        printf("%d ", vetorq[i]);
    }
    printf("\n");
}
