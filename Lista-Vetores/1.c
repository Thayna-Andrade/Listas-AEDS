#include <stdio.h>
int main(){
    int vetor [10];
    
    for(int i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i <10; i++){
        printf("O numero que ocupa a posicao %d e %d\n", i, vetor[i]);
    }

    return 0;

}