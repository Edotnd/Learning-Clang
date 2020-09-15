#include <stdio.h>

int main(void){
    char * strArr[3]={"Simple", "String", "Array"};
    for(int i=0; i<3; i++)
        printf("%s \n", strArr[i]);
    return 0;
}