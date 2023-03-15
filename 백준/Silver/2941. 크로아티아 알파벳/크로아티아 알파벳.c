#include <stdio.h>
#include <string.h>

int main(){
    char S[100];
    int i = 0, cnt = 0;
    scanf("%s", S);
    while(S[i] != '\0'){

        if(S[i] == 'c' && (S[i+1] != '\0' && (S[i+1] == '=' || S[i+1] == '-'))){
            i ++;
        }

        if(S[i] == 'd' && S[i+1] != '\0'){
            if(S[i+1] == '-'){
                i ++;
            }else if(S[i+2] != '\0' && S[i+1] == 'z' && S[i+2] == '='){
                i += 2;
            }
        }

        if(S[i+1] != '\0' && S[i] == 'l' && S[i+1] == 'j'){
            i ++;
        }

        if(S[i+1] != '\0' && S[i] == 'n' && S[i+1] == 'j'){
            i ++;
        }

        if(S[i+1] != '\0' && S[i] == 's' && S[i+1] == '='){
            i ++;
        }

        if(S[i+1] != '\0' && S[i] == 'z' && S[i+1] == '='){
            i ++;
        }

        cnt ++;
        i ++;
    }
    printf("%d", cnt);
    return 0;
}