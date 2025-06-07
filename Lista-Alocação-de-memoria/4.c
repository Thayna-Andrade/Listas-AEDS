#include <stdio.h>
#include <stdlib.h>

int main() {
    int *matriz;
    int tamanho = 3;
    matriz = (int *)calloc(tamanho * tamanho, sizeof(int));

    if (matriz == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    // Leitura dos dados
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("Digite um número para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i * tamanho + j]);
        }
    }

    // Impressão da matriz
    printf("\nMatriz:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", matriz[i * tamanho + j]);
        }
        printf("\n");
    }

    free(matriz);
    return 0;
}
