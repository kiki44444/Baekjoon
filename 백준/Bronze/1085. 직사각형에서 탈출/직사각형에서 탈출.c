#include <stdio.h>

int main(void){
    int x, y, w, h;
    int min = 1001;

    scanf("%d%d%d%d", &x, &y, &w, &h);
    
    if(min > x)
        min = x;
    if(min > y)
        min = y;
    if(min > h-y)
        min = h-y;
    if(min > w-x)
        min = w-x;

    printf("%d\n", min);
    return 0;
}