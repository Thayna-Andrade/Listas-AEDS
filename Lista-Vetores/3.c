#include <stdio.h>

int main(){
    int vetorA [5], vetorB [5], vetorC [5];

    for(int i = 0; i < 5; i++){
        printf("Digite o valor do vetor A: ");
        scanf("%d", &vetorA[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("Digite o valor do vetor B: ");
        scanf("%d", &vetorB[i]);
    }

    for(int i = 0; i < 5; i++){
        vetorC [i] = vetorA[i] + vetorB[i];
        
    }

    /*printf("O vetor soma e igual a: %d", vetorC[0 1 2 3 4]);*/

    printf("O vetor some e igual a: %d %d %d %d %d", vetorC[0], vetorC[1], vetorC[2], vetorC[3], vetorC[4]);

    return 0;
}