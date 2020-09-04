#include <stdio.h>

int main(void){
    int num, total = 0, num_b, i=0;
    scanf("%d", &num);
    while (num-->0){
        i++;
        scanf("%d", &num_b);
        total+=num_b;
    }
    printf("%f \n", (double)total/i);
    return 0;
}