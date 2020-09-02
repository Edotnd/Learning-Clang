#include <stdio.h>

int main(void){
    int x1, y1, x2, y2;
    scanf("%d %d", &x1, &y1), scanf("%d %d", &x2, &y2);
    printf("%d", (x2-x1)*(y2-y1));
    return 0;
}