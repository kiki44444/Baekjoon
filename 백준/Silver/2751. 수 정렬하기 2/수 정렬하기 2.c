# include <stdio.h>
# include <stdlib.h>

// 버블정렬 -> 시간초과
// int main(void){
//     int N;
//     scanf("%d", &N);
//     int arr[N];
//     for(int i=0; i<N; i++){
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0; i<N; i++){
//         for(int j=1; j<N-i; j++){
//             if(arr[j-1] > arr[j]){
//                 int tmp;
//                 tmp = arr[j-1];
//                 arr[j-1] = arr[j];
//                 arr[j] = tmp;
//             }   
//         }
//     }
//     for(int i=0; i<N; i++){
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }

// 삽입정렬 -> 시간초과
// int main(void){
//     int N, key;
//     scanf("%d", &N);
//     int arr[N];
//     for(int i=0; i<N; i++){
//         scanf("%d", &arr[i]);
//     }
//     for(int i=1; i<N; i++){
//         // # 1
//         int j;
//         key = arr[i];
//         for(j=i-1; j>=0 && arr[j]>key; j--){ // key가 더 큰 값일 때까지 
//             arr[j+1] = arr[j]; // 한 칸 뒤로 이동 
//         }
//         arr[j+1] = key;
//         // # 2
//         // for(int j=i-1; j>-1; j--){
//         //     if(arr[j] > key){
//         //         int tmp;
//         //         tmp = arr[j+1];
//         //         arr[j+1] = arr[j];
//         //         arr[j] = tmp;
//         //     }else{
//         //         break;
//         //     }
//         // }
//     }
//     for(int i=0; i<N; i++){
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }

// 언어에 내장된 정렬함수를 쓰란다.

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main(void){
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr, sizeof(arr)/sizeof(int), sizeof(int), compare);
    for(int i=0; i<N; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}