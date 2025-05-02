#include <stdio.h>

int main(){
    float maior;
    int nvetor;
    float vetor [10];

    printf("Digite o valor do primeirto vetor: ");
    scanf("%f", &vetor[0]);
    maior = vetor[0];
    nvetor = 0;

    for(int i = 1; i < 10; i++){
        printf("Digite o valor do proximo vertor: \n");
        scanf("%f", &vetor[i]);
        if(vetor[i] > maior){
            maior = vetor [i];
            nvetor = i;
        }
    }

    printf("O maior numero e %.2f e sua posicao e %d.", maior, nvetor);

    return 0;
}