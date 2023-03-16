# include <stdio.h>

int main(void){
    int table[9][9];
    int max = 0;
    int row;
    int column;

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d", &table[i][j]);
        }
    }
    
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(max <= table[i][j]){
                max = table[i][j];
                row = i+1;
                column = j+1;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d", row, column);
    
    return 0;
}