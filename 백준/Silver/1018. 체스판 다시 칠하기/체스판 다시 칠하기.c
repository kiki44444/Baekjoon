# include<stdio.h>

int main(void){
    int N, M, min = 3000;
    scanf("%d%d", &N, &M);
    char chess[N][M+1];
    for(int i=0; i<N; i++){
        scanf("%s", chess[i]);
    }
    for(int i=0; i<=N-8; i++){
        for(int j=0; j<=M-8; j++){
            char temp[8][8];
            for(int k=0; k<8; k++){
                for(int l=0; l<8; l++){
                    temp[k][l] = chess[i+k][j+l];
                }
            }
            // 첫번째 안바꿧을 때
            int cnt_x = 0;
            char prev, curr;
            for(int k=0; k<8; k++){
                for(int l=0; l<8; l++){
                    curr = temp[k][l];
                    if(l == 0 && k == 0){
                        ;
                    }else if(l == 0){
                        prev = temp[k-1][7];
                        if(prev != curr){
                            if(prev == 'W') temp[k][l] = 'W';
                            else temp[k][l] = 'B';
                            cnt_x ++;
                        }
                    }else{
                        prev = temp[k][l-1];
                        if(prev == curr){
                            if(prev == 'W') temp[k][l] = 'B';
                            else temp[k][l] = 'W';
                            cnt_x ++;
                        }
                    }
                }
            }
            // 첫째판이 바꿧을 떄
            for(int k=0; k<8; k++){
                for(int l=0; l<8; l++){
                    temp[k][l] = chess[i+k][j+l];
                }
            }

            int cnt_o = 0;
            if(temp[0][0] == 'W'){
                temp[0][0] = 'B';
            }else{
                temp[0][0] = 'W';
            }
            cnt_o ++;
            for(int k=0; k<8; k++){
                for(int l=0; l<8; l++){
                    curr = temp[k][l];
                    if(l == 0 && k == 0){
                        ;
                    }else if(l == 0){
                        prev = temp[k-1][7];
                        if(prev != curr){
                            if(prev == 'W') temp[k][l] = 'W';
                            else temp[k][l] = 'B';
                            cnt_o ++;
                        }
                    }else{
                        prev = temp[k][l-1];
                        if(prev == curr){
                            if(prev == 'W') temp[k][l] = 'B';
                            else temp[k][l] = 'W';
                            cnt_o ++;
                        }
                    }
                }
            }
            if(cnt_o < min || cnt_x < min){
                if(cnt_x > cnt_o){
                    min = cnt_o;
                }else{
                    min = cnt_x;
                }
            }
            
        }
    }
    printf("%d\n", min);
    return 0;
}