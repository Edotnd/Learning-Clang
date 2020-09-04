#include <stdio.h>

int main(void){
    int num=1, total=0;
    while (num!=0){
        scanf("%d", &num);
        total+=num;
    }
    printf("%d \n", total);
    return 0;
}