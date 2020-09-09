#include <stdio.h>

int MaxMin(int, int, int);

int main(void){
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Max: %d, Min: %d \n", MaxMin(num1, num2, num3));
    return 0;
}

int MaxMin(int n1, int n2, int n3){
    int Max, Min;

    if(n1>n2)
        Max = n1>n3 ? n1: n3;
    else
        Max = n2>n3 ? n2 : n3;
    if(n1<n2)
        Min = n1<n3 ? n1 : n3;
    else
        Min = n2<n3 ? n2 : n3;
    return Max, Min;
}