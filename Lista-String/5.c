#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    char *inicio, *fim;
    char temp;

    printf("Digite uma string: ");
    scanf(" %[^\n]", str); // Lê com espaços

    // Inicializa os ponteiros
    inicio = str;

    // Move 'fim' para o último caractere válido da string
    fim = str;
    while (*fim != '\0') {
        fim++;
    }
    fim--; // Volta para o último caractere real (antes de '\0')

    // Inverte os caracteres usando os ponteiros
    while (inicio < fim) {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }

    printf("String invertida: %s\n", str);

    return 0;
}
