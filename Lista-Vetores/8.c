#include <stdio.h>

int main(){
    int vetA[10], vetB[10], vetC[20];

    for(int i = 0; i < 10; i++){
        printf("Digite um valor para o vetor A: ");
        scanf("%d", &vetA[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("Digite um valor para o vetor B: ");
        scanf("%d", &vetB[i]);
    }
    for(int i =0; i < 10; i++){
        vetC[i] = vetA[i]; 
    }
    for(int i = 10; i < 20; i++){
        vetC[i] = vetB[19 - i];
    }
    for(int i = 0; i < 10; i++){
        if(vetC[i] == vetA[i]){

        }
    }
}
