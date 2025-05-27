#include <stdio.h>

void minEmax(int *arry, int *min,int *max){
    *min = *max = arry[0];
    for(int i = 1; i < 5; i++){
        if(arry[i] > *max){
            *max = arry[i];
        }else if(arry[i] < *min){
            *min = arry[i];
        }
    }
}

int main(){
    int vetor[5] = { 2 , 6, 3, 5, 10};
    int min, max;

    minEmax(vetor,&min,&max);
    printf("Os valores max e min desse arry e: %d, %d", max, min);

    return 0;
}