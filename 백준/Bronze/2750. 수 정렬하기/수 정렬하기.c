# include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<N; i++){
        int min = 1001;
        int idx;
        for(int j=0; j<N; j++){
            if(arr[j] < min){
                idx = j;
                min = arr[j];
            }
        }
        arr[idx] = 1001;
        printf("%d\n", min);
    }
    return 0;
}