#include <stdio.h>

int main(void){
    int arr[6] = {1, 2, 3, 4, 5, 6}, tmp;
    int * Front_ptr = &arr[0], * Back_ptr = &arr[5];
    
    // printf("%d %d \n", *Front_ptr, *Back_ptr);
    for(int i=0; i<3; i++){ 
        tmp = *Front_ptr;
        *Front_ptr = *Back_ptr;
        *Back_ptr = tmp;
        Front_ptr++, Back_ptr--;
    }
    for(int i=0; i<6; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}