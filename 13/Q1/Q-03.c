#include <stdio.h>

int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int * ptr = &arr[4];
    int sol = 0;

    for(int i=0; i<(sizeof(arr)/4); i++)
        sol+=*(ptr--);
    printf("%d \n", sol);
    return 0;
}