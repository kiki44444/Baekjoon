# include<stdio.h>

int main(void){
    long long n;
    scanf("%lli", &n);
    printf("%lli\n%d\n", ((n-2)*(n-1)*n)/6, 3);
    return 0;
}