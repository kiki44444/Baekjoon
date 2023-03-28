# include <stdio.h>

int main(void){
    int arr[3];
    int max = 0;
    int max_idx, sum;
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    
    for(int i=0; i<3; i++){
        if(max < arr[i]){
            max = arr[i];
            max_idx = i;
        }
    }
    if(max_idx == 0){
        if(arr[0] >= arr[1]+arr[2]){
            sum = 2 * (arr[1]+arr[2]) - 1;
        }else{
            sum = arr[0]+arr[1]+arr[2];
        }
    }else if(max_idx == 1){
        if(arr[1] >= arr[0]+arr[2]){
            sum = 2 * (arr[0]+arr[2]) - 1;
        }else{
            sum = arr[0]+arr[1]+arr[2];
        }
    }else{
        if(arr[2] >= arr[0]+arr[1]){
            sum = 2 * (arr[0]+arr[1]) - 1;
        }else{
            sum = arr[0]+arr[1]+arr[2];
        }
    }
    printf("%d\n", sum);
    return 0;
}