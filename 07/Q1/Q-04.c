#include <stdio.h>

int main(void){
    int num, total = 9;
    scanf("%d", &num);

    while (total>0){
        printf("%dx%d=%d \n", num, total, num*total);
        total--;
    }
    return 0;
}