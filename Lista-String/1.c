#include <stdio.h>
#include <string.h>

int main(){
   char str[10];
    printf("Digite uma string: ");
    scanf("%[^\n]", str);
    printf("%s \n", str);
    return 0;
}