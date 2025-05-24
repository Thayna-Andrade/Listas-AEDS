#include <stdio.h>
#include <string.h>

int main()
{
    char srt[6];
    printf("Digite uma string: ");
    scanf("%[^\n]", srt);
    printf("%.4s \n", srt);
    return 0;
}