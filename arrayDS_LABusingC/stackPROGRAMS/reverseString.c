#include<stdio.h>
#include<string.h>
#define N 100
struct stack{
    int top;
    char item[N];
}s;
void push(char x){//h
    if(s.top== N-1){
        printf("overflow\n");
    }
    else{
        s.item[++s.top]=x;//hello
    }
}
char pop(){
    if(s.top==-1){
        printf("underflow");
    }
    else{
        return s.item[s.top--];
    }
}
void main(){
    s.top=-1;int i;char str[20];
    printf("enter string of max length=");
    scanf("%s",&str);//hello
    //push call
    for(i=0;i<strlen(str);i++){//5
        push(str[i]);//h
    }
    for(i=0;i<strlen(str);i++){
        printf("%c",pop());
    }
    for(i=0;i<strlen(str);i++){
        printf(str[i]);
    }
}