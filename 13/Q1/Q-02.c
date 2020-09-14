#include <stdio.h>

int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int * ptr = arr;
    
    for(int i=0; i<(sizeof(arr)/4); i++){
        *(ptr++)+=2;
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}