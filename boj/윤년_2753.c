#include <stdio.h>

int main(){

    int year;

    scanf("%d", &year);

    if((year%100==0 && year%400==0)==1){
        printf("1");
    }
    else if((year%100!=0 && year%4==0)==1){
        printf("1");
    }
    else{printf("0");
    }
        
    return 0;
}