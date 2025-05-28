#include <stdio.h>

#define N 3  // Tamanho da matriz quadrada

// Função que calcula a diferença entre os maiores valores acima e abaixo da diagonal principal
float diferenca_acima_abaixo(float matriz[N][N]) {
    float maior_acima = -99999.0;
    float maior_abaixo = -99999.0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j > i) {  // Acima da diagonal
                if (matriz[i][j] > maior_acima) {
                    maior_acima = matriz[i][j];
                }
            } else if (i > j) {  // Abaixo da diagonal
                if (matriz[i][j] > maior_abaixo) {
                    maior_abaixo = matriz[i][j];
                }
            }
        }
    }

    return maior_acima - maior_abaixo;
}

int main() {
    float matriz[N][N] = {
        {1.2, 7.5, 3.3},
        {4.0, 2.1, 8.9},
        {5.2, 6.6, 0.0}
    };

    float resultado = diferenca_acima_abaixo(matriz);
    printf("Diferença entre os maiores valores acima e abaixo da diagonal: %.2f\n", resultado);

    return 0;
}
