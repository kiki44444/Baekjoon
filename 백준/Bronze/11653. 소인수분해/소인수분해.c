# include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);
    if(N == 1){
        ;
    }else{
        int i = 2;
        while(N >= i){
            if(N%i == 0){
                printf("%d\n", i);
                N = N/i;
            }else{
                i ++;
            }
        }
    }
    return 0;
}