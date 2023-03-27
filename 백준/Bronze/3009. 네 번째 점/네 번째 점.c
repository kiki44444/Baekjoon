# include <stdio.h>

int main(void){
    int coordinates[3][2];
    int A[3];
    int ans[2];

    for(int i=0; i<3; i++){
        scanf("%d %d", &coordinates[i][0], &coordinates[i][1]);
    }
    for(int k=0; k<2; k++){
        int idx = -1;
        int B[3] = {0};
        for(int i=0; i<3; i++){
            int flag = 0;
            for(int j=0; j<=idx; j++){
                if(coordinates[i][k] == A[j]){
                    B[j] ++;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                idx ++;
                A[idx] = coordinates[i][k];
                B[idx] ++;
            }
        }
        for(int i=0; i<=idx; i++){
            if(B[i]%2 != 0){
                ans[k] = A[i];
                break;
            }
        }
    }
    printf("%d %d\n", ans[0], ans[1]);
    return 0;
}