#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define TAM 10

// Gera números aleatórios de 1 a 100
void preencherMatriz(int matriz[TAM][TAM]) {
    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }
}

// Exibe a matriz
void exibirMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// a) Coluna com maior soma
int colunaMaiorSoma(int matriz[TAM][TAM]) {
    int maiorSoma = 0, indice = 0;
    for (int j = 0; j < TAM; j++) {
        int soma = 0;
        for (int i = 0; i < TAM; i++) {
            soma += matriz[i][j];
        }
        if (soma > maiorSoma) {
            maiorSoma = soma;
            indice = j;
        }
    }
    return indice;
}

// b) Linha com menor soma
int linhaMenorSoma(int matriz[TAM][TAM]) {
    int menorSoma = 100000, indice = 0;
    for (int i = 0; i < TAM; i++) {
        int soma = 0;
        for (int j = 0; j < TAM; j++) {
            soma += matriz[i][j];
        }
        if (soma < menorSoma) {
            menorSoma = soma;
            indice = i;
        }
    }
    return indice;
}

// c) Verifica se número é primo
bool ehPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// d) Conta primos < 100 na matriz
int contarPrimos(int matriz[TAM][TAM]) {
    int cont = 0;
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (ehPrimo(matriz[i][j])) {
                cont++;
            }
        }
    }
    return cont;
}

// e) Conta múltiplos de um número dado
int contarMultiplos(int matriz[TAM][TAM], int num) {
    int cont = 0;
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (matriz[i][j] % num == 0) {
                cont++;
            }
        }
    }
    return cont;
}

// f) Conta elementos menores que os 4 vizinhos (cima, baixo, esquerda, direita)
int contarMenoresQueVizinhos(int matriz[TAM][TAM]) {
    int cont = 0;
    for (int i = 1; i < TAM - 1; i++) {
        for (int j = 1; j < TAM - 1; j++) {
            int atual = matriz[i][j];
            if (atual < matriz[i-1][j] &&
                atual < matriz[i+1][j] &&
                atual < matriz[i][j-1] &&
                atual < matriz[i][j+1]) {
                cont++;
            }
        }
    }
    return cont;
}

int main() {
    int matriz[TAM][TAM];
    preencherMatriz(matriz);
    exibirMatriz(matriz);

    printf("\nColuna com maior soma: %d\n", colunaMaiorSoma(matriz));
    printf("Linha com menor soma: %d\n", linhaMenorSoma(matriz));
    printf("Quantidade de primos < 100: %d\n", contarPrimos(matriz));

    int numero;
    printf("Digite um número para contar múltiplos: ");
    scanf("%d", &numero);
    printf("Quantidade de múltiplos de %d: %d\n", numero, contarMultiplos(matriz, numero));

    printf("Quantidade de elementos menores que seus 4 vizinhos diretos: %d\n", contarMenoresQueVizinhos(matriz));

    return 0;
}
