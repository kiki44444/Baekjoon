# include <stdio.h>

int main(void){
    int A, B;
    scanf("%d %d", &A, &B);
    while(A != 0 || B != 0){
        if(B%A == 0)
            printf("factor\n");
        else if(A%B == 0)
            printf("multiple\n");
        else
            printf("neither\n");
        scanf("%d %d", &A, &B);
    }
    return 0;
}