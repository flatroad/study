#include <stdio.h>

int main(){

    int point_x;

    int point_y;

    scanf("%d %d", &point_x, &point_y);

    if(0<point_x){
        if(0<point_y){
            printf("1");
        }
        else if(0>point_y){
            printf("4");
        }
    }
    if(0>point_x){
                if(0<point_y){
            printf("2");
        }
        else if(0>point_y){
            printf("3");
        }
    }
    
    return 0;

}