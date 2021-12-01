#include <stdio.h>
#include <string.h>
#define MAX 10000

    int arr[MAX];
    int inp = -1;
    int outp = -1;
    int M = 0;

void push(void){
    scanf("%d", &M);
    inp = inp + 1;
    arr[inp] = M;
}

void pop(void){
    if(inp<=outp){
        printf("-1\n");
    }
    else{
        outp = outp + 1;
        printf("%d\n", arr[outp]); 
    }
}

void size(void){
        printf("%d\n", inp-outp);
    }

void empty(void){
    if(inp<=outp){
        printf("1\n");
    }
    else if(inp>outp){
        printf("0\n");
    }
}

void front(void){
    if(inp>outp && inp>=0){
        printf("%d\n", arr[outp+1]);
    }
    else{printf("-1\n");}
}

void back(void){
    if(inp>outp && inp>=0){
        printf("%d\n", arr[inp]);
    }
    else{printf("-1\n");}
}

int main(){
    int N;
    char X[10];

    scanf("%d", &N);

    while(N--){
        scanf("%s", X);

        if(strcmp(X,"push")==0){
            push();
        }
        else if(strcmp(X,"pop")==0){
            pop();
        }
        else if(strcmp(X,"size")==0){
            size();
        }
        else if(strcmp(X,"empty")==0){
            empty();
        }
        else if(strcmp(X,"front")==0){
            front();
        }
        else if(strcmp(X,"back")==0){
            back();
        }
        
    }
    return 0;

}