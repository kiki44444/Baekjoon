# include <stdio.h>

int main(void){
    int N;
    int big = 0, small = 0;
    int flag = 1;
    scanf("%d", &N);
    int temp = N;

    while(temp >= 3){
        if(temp % 5 == 0){
            big += temp / 5;
            flag = 0;
            break;
        }else{
            small ++;
            temp -= 3;
            if(temp == 0){
                flag = 0;
            }
        }
    }
    if(flag == 0){
        printf("%d\n", big + small);
    }else{
        printf("%d\n", -1);
    }
}