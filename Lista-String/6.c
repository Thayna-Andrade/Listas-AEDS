#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    printf("Digite uma string: ");
    fgets(str1, sizeof(str1), stdin);
    char str2[100] = strrev(str1);
    int result = strcomp(str1, str2);
    if(result = 0){
        printf("Não é palindromo");
    }else{
        printf("E palindromo");
    }
    return 0;
}