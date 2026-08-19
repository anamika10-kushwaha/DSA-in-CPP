#include<iostream>
using namespace std;
#define N 100
struct stack
{
    int top;
    int item[N];
}s;
void push(int x){
    if(s.top==N-1){
        cout<<"push is not possible";
    }
    else{
        s.item[++s.top]=x;
    }
}
int pop(){
    if(s.top==-1){
        cout<<"pop is not possible";
    }
    else{
        return s.item[s.top--];
    }
}
bool empty(){
    return (s.top==-1);
}
void decTOoct(int dec){
    char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    while(dec!=0){
        push(dec%16);
        dec=dec/16;
    }
    while(!empty()){
        int x;
        x=pop();
        cout<<hex[x];
    }
}
int main(){
    int dec;s.top=-1;
    cout<<"enter decimal number:";
    cin>>dec;
    decTOoct(dec);
    return 0;
}