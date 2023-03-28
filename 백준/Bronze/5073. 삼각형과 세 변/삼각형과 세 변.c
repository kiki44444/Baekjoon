# include <stdio.h>

int func(int a, int b, int c){
    if(a == b && b == c){
        return 1;
    }else if(a == b && b != c){
        return 2;
    }else if(a != b && b == c){
        return 3;
    }else if(a == c && c != b){
        return 4;
    }else{
        return 5;
    }
}

int main(void){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    while(a!=0 && b!=0 && c!=0){
        int res;
        res = func(a, b, c);
        if(res == 1){
            printf("Equilateral\n");
        }else if(res == 2){
            if(a > c){
                printf("Isosceles\n");
            }else{
                if(c > a+b){
                    printf("Invalid\n");
                }else{
                    printf("Isosceles\n");
                }
            }
        }else if(res == 3){
            if(b > a){
                printf("Isosceles\n");
            }else{
                if(a > b+c){
                    printf("Invalid\n");
                }else{
                    printf("Isosceles\n");
                }
            }
        }else if(res == 4){
            if(a > b){
                printf("Isosceles\n");
            }else{
                if(b > a+c){
                    printf("Invalid\n");
                }else{
                    printf("Isosceles\n");
                }
            }
        }else if(res == 5){
            int max = 0;
            if(a > max){
                max = a;
            }
            if(b > max){
                max = b;
            }
            if(c > max){
                max = c;
            }

            if(max == a){
                if(a<b+c){
                    printf("Scalene\n");
                }else{
                    printf("Invalid\n");
                }
            }else if(max == b){
                if(b<a+c){
                    printf("Scalene\n");
                }else{
                    printf("Invalid\n");
                }
            }else if(max == c){
                if(c<b+a){
                    printf("Scalene\n");
                }else{
                    printf("Invalid\n");
                }
            }
        }
        scanf("%d%d%d", &a, &b, &c);
    }
    return 0;
}