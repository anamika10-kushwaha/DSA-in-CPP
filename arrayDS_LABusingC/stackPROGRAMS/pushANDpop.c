#include<stdio.h>
#define N 100
struct stack{
    int top;int item[N];
}s;
void push(int x){
    if(s.top==N-1){
        printf("push is not possible");
    }
    else{
        s.item[++s.top]=x;
    }
}
    int pop(){
        if(s.top==-1){
            printf("pop not possible");
        }
        else{
            return s.item[s.top--];
        }
}
void main(){
    int i,n;
    s.top=-1;
    printf("push 5 items:");
    for(i=0;i<5;i++){
        scanf("%d",&n);
        push(n);
    }
    for(i=0;i<5;i++){
        printf(pop(s.item[i]));
    }
}
