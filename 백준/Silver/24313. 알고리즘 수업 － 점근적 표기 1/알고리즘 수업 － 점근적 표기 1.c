# include <stdio.h>

int main(void){
    int a1, a0, c, n0;
    scanf("%d%d%d%d", &a1, &a0, &c, &n0);
    if((c >= a1) && ((a1*n0+a0)<=(c*n0))){
        printf("%d\n", 1);
    }else{
        printf("%d\n", 0);
    }
    return 0;
}