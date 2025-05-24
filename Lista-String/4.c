#include <stdio.h>
#include <string.h>

/*int main(){
    char nome[100], nomerv[100];
    int contador = 0;
    printf("Digite uma string: ");
    scanf("%[^\n]", nome);
    while(nome[contador] =! '\0'){
        contador++;
    }
    for(int i = contador - 1, j = 0; i >= 0, j < contador; i--, i++){
        nomerv[i] = nome[j];
    }
    printf("%s", nomerv);
    return 0;
}*/


int main() {
    char nome[1000];
    int i = 0, j;

    printf("Digite uma string: ");
    scanf(" %[^\n]", nome);  // lê até a quebra de linha (inclusive espaços)

    // Descobrir o tamanho da string manualmente
    while (nome[i] != '\0') {
        i++;
    }

    // Imprimir a string invertida
    printf("String invertida: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%c", nome[j]);
    }

    printf("\n");
    return 0;
}

