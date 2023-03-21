# include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    while(n != -1){
        int sum = 0;
        int arr[n];
        int idx = -1;
        for(int i=1; i<n; i++){
            if(n%i == 0){
                idx ++;
                arr[idx] = i;
                sum += i;
            }
        }
        if(sum == n){
            printf("%d = %d", n, arr[0]);
            for(int i=1; i<=idx; i++){
                printf(" + %d", arr[i]);
            }
            printf("\n");
        }else{
            printf("%d is NOT perfect.\n", n);
        }
        scanf("%d", &n);
    }
    return 0;
}