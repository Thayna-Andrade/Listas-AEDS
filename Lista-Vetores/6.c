#include <stdio.h>

int main(){
    int vetor [15], soma = 0;

    for(int i = 0; i < 15; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 != 0){
            soma += vetor[i];
        }
    }

    printf("A soma dos numeros impares desse vetor e: %d", soma);

    return 0;
}