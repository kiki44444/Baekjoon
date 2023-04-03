# include <stdio.h>

int main(void){
    int N, M;
    int ans = 0;
    scanf("%d%d", &N, &M);

    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<N-2; i++){
        for(int j=i+1; j<N-1; j++){
            for(int k=j+1; k<N; k++){
                int sum;
                sum = arr[i] + arr[j] + arr[k];
                if(sum > ans && sum <= M){
                    ans = sum;
                }
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}