#include <stdio.h>

void retorno(int *conjunto, int tamanho){
    int *ptr = conjunto;         // 'ptr' é um ponteiro que começa apontando para o primeiro elemento do array
    int *fim = conjunto + tamanho; // 'fim' aponta para a posição imediatamente após o último elemento

    while (ptr < fim) {       // Enquanto o ponteiro não chegar ao final do array
        printf("%d ", *ptr);  // Imprime o valor que o ponteiro está apontando
        ptr++;                // Move o ponteiro para o próximo elemento (incrementa o endereço)
    }

    printf("\n");             // Quebra de linha após imprimir todos os elementos
}

int main(){
    int conjunto[5] = {1,2,3,4,5};
    retorno(conjunto, 5);

    return 0;
}