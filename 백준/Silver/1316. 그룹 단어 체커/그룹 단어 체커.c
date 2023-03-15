# include <stdio.h>
# include <string.h>

int main(void){
    int N;
    int cnt = 0;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        char W[100];
        char temp[26];
        int len_W;
        int len_temp = 0;
        int flag = 0;
        char letter = '-';

        scanf("%s", W);

        len_W = strlen(W);
        for(int j=0; j<len_W; j++){
            for(int k=0; k<len_temp; k++){
                if(W[j] == temp[k] && letter != W[j]){
                    flag = 1;
                    break;
                }
            }

            if(flag == 1){
                break;
            }else{
                temp[len_temp] = W[j];
                letter = W[j];
                len_temp ++;
            }
        }
        if(flag != 1)
            cnt ++;
    }

    printf("%d", cnt);
    return 0;
}