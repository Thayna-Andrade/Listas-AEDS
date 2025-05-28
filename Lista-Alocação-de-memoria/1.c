#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;

    // Aloca dinamicamente memória para 10 inteiros
    vetor = (int *) malloc(10 * sizeof(int));

    // Verifica se a alocação foi bem-sucedida
    if (vetor == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    // Preenche o vetor com valores de 1 a 10
    for (int i = 0; i < 10; i++) {
        vetor[i] = i + 1;
    }

    // Imprime os valores do vetor
    printf("Valores do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(vetor);

    return 0;
}
