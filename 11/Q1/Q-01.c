#include <stdio.h>

int main(void){
    int arr[5], Max, Min;
    
    for(int i=0; i<5; i++)
        scanf("%d", &arr[i]);
    Max = arr[0], Min = arr[0];

    for(int i=0; i<5; i++){
        if(arr[i]>Max)
            Max=arr[i];
        if(arr[i]<Min)
            Min = arr[i];
    }
    printf("Max: %d, Min: %d \n", Max, Min);
    return 0;
}