#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(){
    int *vet;
    vet = (int *)malloc(MAX * sizeof(int));
    int tamanho;
    
    printf("Qual sera o tamanho do seu vetor?");
    scanf("%d", &tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("Digite um valor para o vetor: ");
        scanf("%d", &vet[i]);
    }
    for(int i = 0; i <tamanho; i++){
        printf("%d", vet[i]);
    }

    free(vet);
    return 0;
}