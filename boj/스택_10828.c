#include <stdio.h>
#include <string.h>
#define MAXSIZE 10000

int stack[MAXSIZE];
int top = -1;


void push(int i){
    top = top+1;
    stack[top]=i;
}

void pop(){
    if(top<0){
        printf("-1\n");
    }
    else{
    printf("%d\n", stack[top]);
    top = top -1;
    }
}

void size(){
    printf("%d\n", top+1);
}

void empty(){
    if(top==-1){
        printf("1\n");
    }
    else{printf("0\n");}
}

void geek(){
    if(top==-1){
        printf("-1\n");
    }
    else{
        printf("%d\n", stack[top]);
    }
}

int main(){
    int N;
    char X[10];
    int i;

    scanf("%d", &N);

    while(N--){
        scanf("%s", X);
        // printf("%s\n", X);

        if(strcmp(X,"push")==0){
            scanf("%d", &i);
            push(i);
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
        else if(strcmp(X,"top")==0){
            geek();
        }
        
    }
    return 0;

}