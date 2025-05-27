#include <stdio.h>

int main(){
    int conjunto[5];

    for(int i  = 0; i <5; i++){
        printf("Digite um valor: ");
        scanf("%d", &conjunto[i]);
        if(conjunto[i] % 2 == 0){
            printf("O endereco dessa posicao e: %d", &conjunto);
        }
    }

    return 0;
}
