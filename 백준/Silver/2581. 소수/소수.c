# include <stdio.h>

int main(void){
    int M, N;
    int min = 100001;
    int sum = 0;
    scanf("%d %d", &M, &N);
    for(int i=M; i<N+1; i++){
        if(i == 1){
            continue;
        }else{
            int flag = 0;
            for(int j=2; j<i; j++){
                if(i%j == 0){
                    //소수가 아님
                    flag = 1;
                    break;
                }
            }
            if(flag == 1){
                //소수가 아님, 약수가 있음
                continue;
            }else{
                //소수 맞음
                sum += i;
                if(min > i){
                    min = i;
                }
            }
        }
    }
    if(sum == 0){
        printf("-1\n");
    }else{
        printf("%d\n%d\n", sum, min);
    }
    return 0;
}