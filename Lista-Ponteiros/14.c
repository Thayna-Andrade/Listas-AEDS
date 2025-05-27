#include <stdio.h>
#define MAX 100

int negativos(float *vet, int N){
    int contador = 0;
    for(int i = 0 ; i < N; i++){
        if(vet[i] < 0){
            contador++;
        }
    }
    return contador;
}

int main(){
    float vetor[MAX];
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    printf("Ha %d numeros negativos nesse vetor.", negativos(vetor,tamanho));
    return 0;
}