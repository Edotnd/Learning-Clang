#include <stdio.h>

int main(void){
    char ch = 9;
    int inum = 1052;
    double dnum = 3.1415;
    printf("번수 ch의 크기: %ld \n", sizeof(ch));
    printf("번수 inum의 크기: %ld \n", sizeof(inum));
    printf("번수 dnum의 크기: %ld \n", sizeof(dnum));

    
    printf("char의 크기: %ld \n", sizeof(char));
    printf("int의 크기: %ld \n", sizeof(int));
    printf("long의 크기: %ld \n", sizeof(long));
    printf("long long의 크기: %ld \n", sizeof(long long));
    printf("float의 크기: %ld \n", sizeof(float));
    printf("double의 크기: %ld \n", sizeof(double));
    return 0;
}