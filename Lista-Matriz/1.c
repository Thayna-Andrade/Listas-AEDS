#include <stdio.h>

int main(){
    int matriz [2][3];
    int matriztransposta [3][2];
    int soma = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("Escreva o numero da coluna %d linha %d", j, i);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("A matriz original e: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            matriztransposta[i][j] = matriz[j][i];
        }
    }

    printf("A matriz transposta e: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("%d", matriztransposta[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 2; i ++){
        for(int j = 0; j < 3; j++){
            soma += matriz[i][j];
        }
    }

    printf("A soma da matriz e: %d", soma);

    return 0;
}