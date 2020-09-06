#include <stdio.h>

int main(void){
    double total=0, input=0;
    int num;

    for(num=0; input>=0.0; num++){
        total+=input;
        printf("실수 입력(minus to quit) : "), scanf("%lf", &input);
    }
    printf("평균: %f \n", total/(num-1));
    return 0;
}