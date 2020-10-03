#include <stdio.h>

int main(void){
    char str[100];
    int str_size=0, i;
    printf("문자열 입력: "), scanf("%s", str);
    for(int j=0; str[j]!=0; j++)
        str_size+=1;
    
    for(i=1; i<str_size/2+1; i++)
        if(str[i-1] != str[str_size-i]){
            i=0; break;
        }
    if(i!=0)
        printf("회문 입니다.");
    else
        printf("회문이 아닙니다.");
    return 0;
}