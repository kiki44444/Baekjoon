# include <stdio.h>

int main(void){
    int N, M;
    scanf("%d%d", &N, &M);
    int mat1[100][100];
    int mat2[100][100];
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            mat1[i][j] += mat2[i][j];
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }


    return 0;
}