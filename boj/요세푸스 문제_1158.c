#include <stdio.h>

int main(){

    int N, K;
    int i = 0;
    int j = 0;

    scanf("%d%d", &N, &K);

    int arr[N];

    while(i<N){
        arr[i]= i+1;
        i++;
    }
    
    int count = 1;
    i = 0;

    printf("<");
    for(j=0; j<N; j++){
        while(1){
            if(i>=N){
                i=0;
                continue;
            }
            else if(arr[i]==0){
                i++;
                continue;
            }

            if(K-count!=0){
                i++;
                count++;
            }
            else if(K-count==0){
                printf("%d", arr[i]);
                arr[i]=0;
                i++;
                count=1;
                break;
            }
        }
        if(j!=N-1){
        printf(", ");
        }
        else{
            printf(">");
        }
    }

    return 0;
}