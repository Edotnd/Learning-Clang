#include <stdio.h>

int main(void){
    int num1, num2, result;
    scanf("%d %d", &num1, &num2);
    result = num1>num2 ? num1-num2 : num2-num1;
    printf("%d \n", result); 
    return 0;
}