#include <stdio.h>

int main(void){
    char Word[100];
    scanf("%s", Word);
    int i;

    for(i=0; Word[i]!=0; i++);
    for(; i>-1; i--)
        printf("%c", Word[i]);
    printf("\n");
    return 0;
}