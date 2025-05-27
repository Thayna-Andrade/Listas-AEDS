#include <stdio.h>

int organizar(int *a, int *b, int *c){
    int aux;

 if (*a > *b) {
        aux = *a;
        *a = *b;
        *b = aux;
    }
    if (*a > *c) {
        aux = *a;
        *a = *c;
        *c = aux;
    }
    if (*b > *c) {
        aux = *b;
        *b = *c;
        *c = aux;
    }

    printf("%d, %d, %d", *a, *b, *c);

    if(*a == *b ||*b==*c){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int a, b, c, resposta;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    resposta = organizar(&a,&b,&c);
    printf("%d", resposta);
    return 0;
}