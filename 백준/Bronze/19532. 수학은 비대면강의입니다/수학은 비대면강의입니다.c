# include <stdio.h>

int main(void){
    int a, b, c, d, e, f, x, y;
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    if(a != 0){
        y = (a*f - d*c)/(a*e - d*b);
        x = (c-b*y)/a;
    }else{
        y = c / b;
        x = (f - e*y) / d;
    }
    printf("%d %d\n", x, y);
    return 0;
}