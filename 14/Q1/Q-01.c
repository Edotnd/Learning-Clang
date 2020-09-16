#include <stdio.h>

int SquareByValue(int);
void SquareByReference(int *);

int main(void){
    int num = 10;
    printf("%d ", SquareByValue(num));
    SquareByReference(&num);
    printf("%d \n", num);
    return 0;
}

int SquareByValue(int num){
    return num*num;
}

void SquareByReference(int * num){
    *num *= *num;
}