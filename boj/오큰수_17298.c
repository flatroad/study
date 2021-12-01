include <stdio.h>
define MAX 1000000

int stack[MAX];
int top = - 1;

void push(int M){
    top = top + 1;
    stack[top]=M;
}

void pop(){
    top = top -1;
}

int main(){

    int N;
    
    scanf("%d", &N);

    int arr[N];
    int ans[N];

    int i = 0;

    while(i<N){
        scanf("%d", &arr[i]);
        i++;
    }  

    int g = i-1;

    push(arr[g]);
    g--;

    int k = N-1;
    ans[k] = -1;

    i--;    //i는 3.
    while(i--){
        --k;
        int j = top;
        while(0<=j){
            if(arr[i]<stack[j]){
                ans[k]=stack[j];
                break;
            }
            else if(arr[i]>=stack[j]){
                pop();
					j--;
                }
            }
            if(j==-1){
                ans[k]=-1;  
        }
        push(arr[i]);
    }
    i=0;
    while(i<N){
        printf("%d\n", ans[i]);
        i++;
    }

    return 0;
}
