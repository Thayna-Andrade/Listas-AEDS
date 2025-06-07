#include <stdio.h>
#include <stdlib.h>

int soma_elementos(int *vet, int tamanho){
    int soma = 0;
    for(int i =0; i < tamanho; i++){
        soma += vet[i];
    }
    return soma;
}

int main(){
    int *vet;
    vet = (int *)malloc(5 * sizeof(int));
    int tamanho = 5;
    for(int i = 0; i < 5; i ++){
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }
    printf("A soma dos elementos e: %d", soma_elementos(vet,tamanho));

    return 0;
}