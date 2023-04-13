# include <stdio.h>

int main(void){
    int N, k;
    scanf("%d%d", &N, &k);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    //버블정렬
    for(int i=0; i<N; i++){
        for(int j=1; j<N-i; j++){
            if(arr[j-1] < arr[j]){
                int temp;
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d\n", arr[k-1]);
    return 0;
}