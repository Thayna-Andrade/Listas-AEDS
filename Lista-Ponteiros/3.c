#include <stdio.h>
void troca(int *a,int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
 int a, b;
 printf("Digite o valor de a: ");
 scanf("%d", &a);
 printf("Digite o valor de b: ");
 scanf("%d", &b);
 troca(&a, &b);
 printf("Agora os valores de a e b sao: %d e %d", a, b);

 return 0;
}