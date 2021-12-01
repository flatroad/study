#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int A[MAX];


int gcd(int M, int N){
    if(M%N==0){
        return N;
    }
    else{
        return gcd(N, M%N);
    }
}

int main(){
    int N, S; 
    int K;   

    scanf("%d%d", &N, &S);

    int i = 0;

    while(i<N){
    scanf("%d", &K);
        A[i]= abs(K-S);
        i++;
    }
    i=0;

    i=1;
    int R = 0;
        if(N==1){
            printf("%d", A[0]);
        }
        else{
            R=gcd(A[i-1], A[i]);
            if(N==2){
                printf("%d", R);
                return 0;
            }
            else{
                while(i<N){
                R = gcd(R, A[i]);
                i++;
            }
            }
            printf("%d", R);
        }

    return 0;

    }
