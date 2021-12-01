#include <stdio.h>
#define MAX 103

int long long memo[MAX];


int long long repeat(int N){

    if(N==1){
        return 1;
    }
    if(N==2){
        return 1;
    }
    if(N==3){
        return 1;
    }
    if(memo[N]!=0){
        return memo[N];
    }
    memo[N]=repeat(N-2)+repeat(N-3);

    return memo[N];
}


int main(){

    int T;
    int N;

    scanf("%d", &T);

    while(T--){
        scanf("%d", &N);

        printf("%llu\n", repeat(N));

    }

    return 0;
}