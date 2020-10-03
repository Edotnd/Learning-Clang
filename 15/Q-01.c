#include <stdio.h>

int Odd(int *, int); // 홀수
int Even(int *, int); // 짝수

int main(void){
    int arr[10], size_info;
    for(int i=0; i<10; i++)
        printf("입력: "), scanf("%d", (arr+i));
    size_info = sizeof(arr)/sizeof(int);
    Odd(arr, size_info), printf("\n");
    Even(arr, size_info);
    return 0;
}

int Odd(int * arr, int size){
    printf("홀수: ");
    for(int i=0; i<size; i++)
        if(*(arr+i)%2==1 || *(arr+i)==1)
            printf("%d ", *(arr+i));
}

int Even(int * arr, int size){
    printf("짝수: ");
    for(int i=0; i<size; i++)
        if(*(arr+i)%2==0)
            printf("%d ", *(arr+i));
}