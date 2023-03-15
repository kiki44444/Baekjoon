# include <stdio.h>
# include <string.h>

double scoreTable(char * grade){
    if(!strcmp(grade,"A+")) return 4.5;
    else if(!strcmp(grade,"A0")) return 4.0;
    else if(!strcmp(grade,"B+")) return 3.5;
    else if(!strcmp(grade,"B0")) return 3.0;
    else if(!strcmp(grade,"C+")) return 2.5;
    else if(!strcmp(grade,"C0")) return 2.0;
    else if(!strcmp(grade,"D+")) return 1.5;
    else if(!strcmp(grade,"D0")) return 1.0;
    else if(!strcmp(grade,"F")) return 0.0;
    else return -1.0;
}

int main(void){
    double sum1 = 0.0;
    double sum2 = 0.0;
    for(int i=0; i<20; i++){
        char name[50];
        double score;
        char grade[2];

        scanf("%s", name);
        scanf("%lf", &score);
        scanf("%s", grade);

        if(grade[0] != 'P'){
            sum1 += score;
            sum2 += scoreTable(grade) * score;
        }
    }
    printf("%lf", sum2/sum1);
    return 0;
}