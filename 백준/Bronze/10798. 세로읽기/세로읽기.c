# include <stdio.h>
# include <string.h>

int main(void){
    char mat[5][16];
    for(int i=0; i<5; i++){
        int len;
        scanf("%s", mat[i]);
        len = strlen(mat[i]);
        if(len != 15){
            for(int j=len; j<16; j++){
                mat[i][j] = '-';
            }
        }
    }
    for(int i=0; i<15; i++){
        for(int j=0; j<5; j++){
            if(mat[j][i] != '-'){
                printf("%c", mat[j][i]);
            }
        }
    }
    printf("\n");
    return 0;
}