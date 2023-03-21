# include <stdio.h>

int main(void){
    int white[100][100] = {0};
    int N;
    int area = 0;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        int X, Y;
        scanf("%d %d", &X, &Y);
        for(int j=Y; j<Y+10; j++){
            if(j > 99){
                break;
            }
            for(int k=X; k<X+10; k++){
                if(k > 99){
                    break;
                }
                white[j][k] = 1;
            }
        }
    }

    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(white[i][j] == 1){
                area ++;
            }
        }
    }
    printf("%d\n", area);
    return 0;
}