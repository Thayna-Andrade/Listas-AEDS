#include <stdio.h>

int main(){
    int conjunto[5];
    int *vconjunto = &conjunto;

    for(int i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &conjunto[i]);
        vconjunto[i] = 2 * conjunto[i];
        printf("O dobro desse valor é: %d", conjunto[i]);
    }

    return 0;

}