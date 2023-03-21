# include<stdio.h>

int main(void){
    int N, K, ans;
    int cnt = 0;
    int flag = 0;
    scanf("%d %d", &N, &K);
    for(int i=1; i<=N; i++){
        if(N%i == 0){
            cnt ++;
            if(cnt == K){
                ans = i;
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0){
        printf("0");
    }else{
        printf("%d", ans);
    }
    return 0;
}