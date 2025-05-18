#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor1[10];
    int vetor2[10];  // No máximo 10 pares
    int i, j = 0;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Preenche o vetor1 com números aleatórios entre 5 e 20
    for (i = 0; i < 10; i++) {
        vetor1[i] = rand() % 16 + 5;  // Gera números de 5 a 20
    }

    // Preenche o vetor2 com os números pares do vetor1
    for (i = 0; i < 10; i++) {
        if (vetor1[i] % 2 == 0) {
            vetor2[j] = vetor1[i];
            j++;
        }
    }

    // Exibe o vetor1
    printf("Vetor 1 (original): ");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor1[i]);
    }

    // Exibe o vetor2 (com pares)
    printf("\nVetor 2 (pares): ");
    for (i = 0; i < j; i++) {
        printf("%d ", vetor2[i]);
    }

    printf("\n");
    return 0;
}
