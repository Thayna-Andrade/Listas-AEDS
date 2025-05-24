#include <stdio.h>

int somadobro(int *a, int *b){
    int soma;
    *a = *a * *a;
    *b = *b * *b;
    soma = *a + *b;
    return soma;
}

int main(){
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d",&a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("A soma do produto de a e b e: %d", somadobro(&a,&b));
    return 0;
}