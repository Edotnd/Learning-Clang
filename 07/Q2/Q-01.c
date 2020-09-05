#include <stdio.h>

int main(void){
    int cnt=5, num, total=0;
    while (cnt>0){
        scanf("%d", &num);
        while (num<1){
            printf("재입력: "), scanf("%d", &num);
        }
        total+=num;
        cnt--;
    }
    printf("%d \n", total);
    return 0;
}