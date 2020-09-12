#include <stdio.h>

int main(void){
    char str[100];
    scanf("%s", str);
    int i;

    for(i=0; str[i]!=0; ++i);
    printf("%d \n", i);
    
    return 0;
}