#include <stdio.h>


// Função que retorna o maior valor da linha i de uma matriz
float maiorNumLinha(float matriz[][5], int linha) {
    float maior = matriz[linha][0];  // Assume o primeiro elemento como maior
    
    for (int j = 1; j < 5; j++) {
        if (matriz[linha][j] > maior) {
            maior = matriz[linha][j];
        }
    }
    
    return maior;
}

int main() {
    float matriz[3][5] = {
        {1.1, 2.3, -4.0, 0.0, 5.5},
        {3.4, 1.2, 7.8, 0.5, 2.2},
        {-1.0, -3.3, -2.2, -4.4, -0.5}
    };

    int linhaDesejada = 1;

    float maiorValor = maiorNumLinha(matriz, linhaDesejada);
    printf("O maior valor da linha %d é: %.2f\n", linhaDesejada, maiorValor);

    return 0;
}

