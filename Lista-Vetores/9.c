#include <stdio.h>

int main() {
    float vetA[10], aux;

    // Leitura dos valores
    for (int i = 0; i < 10; i++) {
        printf("Digite um número real para a posição %d: ", i + 1);
        scanf("%f", &vetA[i]);
    }

    // Ordenação - método da bolha (Bubble Sort)
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetA[i] > vetA[j]) {
                aux = vetA[i];
                vetA[i] = vetA[j];
                vetA[j] = aux;
            }
        }
    }

    // Impressão dos valores ordenados
    printf("\nVetor ordenado em ordem crescente:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", vetA[i]);
    }

    printf("\n");
    return 0;
}
