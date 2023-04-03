# include <stdio.h>
# include <math.h>

int main(void){
    int N;
    int ans = 0;
    scanf("%d", &N);
    for(int i=1; i<N+1; i++){
        //몇자리 수 인지 알아내자
        //각 자리수에 맞게 각자리수를 더하고 원래 수를 더한다
        int num = i;
        int sum = 0;
        while(1){
            sum += (num % 10);
            num /= 10;
            if(num == 0){
                break;
            }
        }
        sum += i;
        // N과 같은지 확인한다.
        // 같으면 break, 다르면 계속 돌린다
        if(sum == N){
            ans = i;
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}