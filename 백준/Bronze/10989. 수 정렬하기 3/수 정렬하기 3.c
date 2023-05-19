// counting sort

# include <stdio.h>

int main(void){

    long long N;
    int B[10001] = {0};
    scanf("%lld", &N);


    for(long long i=0; i<N; i++){
        int tmp;
        scanf("%d", &tmp);
        B[tmp] ++; 
    }

    for(int i=1; i<10001; i++){
        int tmp = B[i];
        while(tmp != 0){
            printf("%d\n", i);
            tmp --;  
        }
    }
    
    return 0;
}