#include <stdio.h>

#include <stdio.h>
int main(){
    int a, b;
    printf("Digite um valor: ");
    scanf("%d", &a);
    printf("Digite outro valor: ");
    scanf("%d", &b);
    if(&a > &b){
        printf("%d", &a);
    }else{
        printf("%d", &b);
    }

    return 0;
}