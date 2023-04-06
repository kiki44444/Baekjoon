# include <stdio.h>

int main(void){
    int N, remainder, cont_6;
    int cnt = 0;
    long i = 1;
    long quotient, ans;
    scanf("%d", &N);
    while(1){
        quotient = i;
        remainder = -1;
        cont_6 = 0;
        while(quotient != 0){
            remainder = quotient % 10;
            quotient = quotient / 10;
            if(remainder == 6){
                cont_6 ++;
            }else{
                cont_6 = 0;
            }
            if(cont_6 == 3){
                cnt ++;
                break;
            }
        }
        if(cnt == N){
            ans = i;
            break;
        }
        i ++;
    }
    printf("%li\n", ans);
}