# include <stdio.h>

int main(void){
    int N;
    int arr[100];
    int cnt = 0;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<N; i++){
        int flag = 0;
        if(arr[i] == 1){
            ;
        }else if(arr[i] == 2){
            cnt ++;
        }else{
            for(int j=2; j<arr[i]; j++){
                if(arr[i]%j == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                cnt ++;
            }   
        }
    }
    printf("%d",  cnt);
    return 0;
}