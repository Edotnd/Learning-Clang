#include <stdio.h>

int main(void){
    int n, total=1, i=1;
    scanf("%d", &n);
    
    for(; i<n+1; i++)
        total*=i;
    printf("%d! = %d \n", n, total);
    return 0;
}