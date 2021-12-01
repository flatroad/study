#include <stdio.h>

int main(){

    int T;  //테스트 실행 갯수.
    int H;  //호텔의 층 수.
    int W;  //호텔 층의 방수.
    int N;  //몇번 째 고객인지.
   
    scanf("%d", &T);

    while(T--){
        scanf("%d %d %d", &H, &W, &N);
        if((N%H==0)){
            printf("%d\n",H*100+(N/H));
        }
        else{
        printf("%d\n", ((N%H)*100)+((N/H)+1));
        } 
    }
    return 0;
}