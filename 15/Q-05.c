#include <stdio.h>

void Sort(int *, int);

int main(void){
    int num_Arr[ ] = {4, 5, 3, 6, 7};
    Sort(num_Arr, sizeof(num_Arr)/sizeof(int));
    for(int i=0; i<5; i++)
        printf("%d ", num_Arr[i]);
    return 0;
}

void Sort(int * num_Arr, int size){
    int temp;
    for(int i=0; i<size; i++)
        for(int j=0; j<size-1; j++)
            if(num_Arr[j]>num_Arr[j+1]){
                temp = num_Arr[j+1];
                num_Arr[j+1]= num_Arr[j];
                num_Arr[j] = temp;
            }
}