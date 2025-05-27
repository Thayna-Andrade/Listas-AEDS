#include <stdio.h>

int main(){
    float conjunto [10] = {1.5 , 2.3 , 3.9 , 4.6 , 5.8 , 6.7 , 7.9 , 8.1 , 9.10 , 10.1};

    for(int i = 0; i <10; i++){
        printf("%.2f ,", conjunto[i]);
    }

    return 0;
}