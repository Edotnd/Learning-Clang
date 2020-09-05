#include <stdio.h>

int main(void){
    int num=0, to=0;
    while(num<5){
        while(to<num){
            printf("o ");
            to++;
        }
        to=0;
        printf("* \n");
        num++;
    }
    return 0;
}