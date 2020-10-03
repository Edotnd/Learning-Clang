#include <stdio.h>

int main(void){
    int num, mod[10], i;
    printf("10진수 정수 입력: "), scanf("%d", &num);
    for(i=0; num!=0; i++){
        mod[i] = num%2;
        num = num/2;
    }
    printf("i: %d \n", i);
    for(i-=1; i>-1; i--)
        printf("%d", mod[i]);
    return 0;
}