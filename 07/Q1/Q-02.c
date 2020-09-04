#include <stdio.h>

int main(void){
    int num, cnt=0;
    scanf("%d", &num);
    while (cnt<num){
        cnt++;
        printf("%d  ", cnt*3);
    }
    return 0;
}