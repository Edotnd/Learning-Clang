#include <stdio.h>

void ShowArrayElem(int *, int);

int main(void){
    int arr1[3]={1, 2, 3};
    int arr2[5]={4, 5, 6, 7, 8};
    ShowArrayElem(arr1, sizeof(arr1)/sizeof(int));
    ShowArrayElem(arr1, sizeof(arr2)/sizeof(int));   
    return 0;
}

void ShowArrayElem(int * param, int len){
    for(int i=0; i<len; i++)
        printf("%d ", param[i]);
    printf("\n");
}