# include <stdio.h>

int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a+b+c == 180){
        if(a == 60 && b == 60 && c == 60){
            printf("Equilateral");
        }else if((a == b && b != c) || (a != b && b == c) || (a == c && c != b)){
            printf("Isosceles");
        }else{
            printf("Scalene");
        }
    }else{
        printf("Error");
    }
    return 0;
}