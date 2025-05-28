#include <stdio.h>

int main(){
    int vetA[10], vetB[10];

    for(int i = 0; i < 10; i++){
        printf("escreva um numero para o vetor A: ");
        scanf("%d", &vetA[i]);
    }
    for(int j = 0; j < 10; j++){
        vetB[j] = vetA[9-j];
        printf("%d , ", vetB[j]);
    }
    return 0;
}