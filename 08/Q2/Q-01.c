#include <stdio.h>

int main(void){
    int num1, num2;

    for(num1=1; num1<10; num1++){
        if(num1%2==0)
            for(num2=1; num2<num1+1; num2++){
                printf("%d x %d = %d \n", num1, num2, num1*num2);
            }
    }
    return 0;
}