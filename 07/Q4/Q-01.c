#include <stdio.h>

int main(void){
    int min, max, total=0;
    scanf("%d %d", &min, &max);

    for(; min<max+1; min++)
        total+=min;
    printf("%d", total);
    return 0;
}