#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int contador = 0;
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    while (str[contador] != '\0') {
        if (str[contador] == '\n') {
            break;
        }
        contador++;
    }
    printf("O tamanho dessa string e: %d", contador);
}