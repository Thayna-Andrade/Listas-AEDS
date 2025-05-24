#include <stdio.h>

void maior(int *a, int *b){
    int aux = *a;
    if(*a > *b){
        *a = *b;
        *b = aux;
    }
}

int main(){
    int a,b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    maior(&a, &b);
    printf("Os valores em ordem crescente sao: %d, %d",a,b);

    return 0;
}