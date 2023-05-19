# include <stdio.h>

int main(void){
    long long N;
    int A[11] = {0};

    scanf("%lld", &N);
    while(N != 0){
        A[N % 10] ++;
        N = N / 10;
    }
    for(int i=10; i>=0; i--){
        while(A[i] != 0){
            printf("%d", i);
            A[i] --;
        }
    }
    return 0;
}