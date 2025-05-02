#include <stdio.h>

int main(){
    int vetor [10], par = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o valor do vetor: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            par++;
        }
    }

    printf("A quantidade de numeros par nesse vetor e de: %d.", par);

    return 0;
}