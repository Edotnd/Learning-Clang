#include <stdio.h>

int main(void){
    char str[50]="I like C programming(?)";
    printf("String: %s \n", str);

    str[8]='\0';
    printf("String: %s \n", str);

    str[6]='\0';
    printf("String: %s \n", str);
    return 0;
}