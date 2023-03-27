# include <stdio.h>

int main(void){
    long N;
    scanf("%li", &N);
    long mat[N][2];
    long area = 1;
    for(int i=0; i<N; i++){
        scanf("%li %li", &mat[i][0], &mat[i][1]);
    }
    for(int i=0; i<2; i++){
        int max = -100001, min = 100001;
        for(int j=0; j<N; j++){
            if(mat[j][i] < min){
                min = mat[j][i];
            }
            if (mat[j][i] > max){
                max = mat[j][i];
            }
        }
        area = area * (max - min);
    }
    printf("%li\n", area);
    return 0;
}