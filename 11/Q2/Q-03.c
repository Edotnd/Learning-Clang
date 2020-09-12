#include <stdio.h>

int main(void){
    char Word[100];
    scanf("%s", Word);
    int Max = Word[0];

    for(int i=0; Word[i]!=0; i++)
        if(Max<Word[i])
            Max=Word[i];
    printf("%c", Max);
    return 0;
}