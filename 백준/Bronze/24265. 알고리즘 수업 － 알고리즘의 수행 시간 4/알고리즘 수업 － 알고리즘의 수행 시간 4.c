# include <stdio.h>

int main(void){
    long n;
    scanf("%li", &n);
    printf("%li\n%d\n", n*(n-1)/2, 2);
    return 0;
}