//달팽이가 올라가는데 걸리는 일수

#include <stdio.h>

int main(){

    int A; //달팽이가 올라간 거리.
    int B; //달팽이가 떨어진 거리.
    int V; //달팽이가 가야하는 거리.
    int day; //달팽이가 올라가는데 걸린 일수.

    scanf("%d %d %d", &A, &B, &V);

    day = (V-B) / (A-B);

    if(((V-B)%(A-B))==0){
        day=day;
    }
    else{day+=1;}

    printf("%d", day);

    return 0;
}