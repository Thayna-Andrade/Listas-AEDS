#include <stdio.h>

int main (){
    char s = 'a', *v1;
    int num =10, *v2;
    float real= 5.5, *v3;
    printf("%c, %d, %.2f", s, num, real);
    v1 = &s;
    v2 = &num;
    v3 = &real;
    *v1 = 'b';
    *v2 = 20;
    *v3 = 10.5;
    printf("%c, %d, %.2f", s, num, real);
    return 0;
}