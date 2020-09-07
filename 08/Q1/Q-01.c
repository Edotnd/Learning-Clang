#include <stdio.h>

int main(void){
    int num;
    for(num=0; num<100; num++)
        if(num%7==0 || num%9==0)
            printf("num: %d", num);
    return 0;
}