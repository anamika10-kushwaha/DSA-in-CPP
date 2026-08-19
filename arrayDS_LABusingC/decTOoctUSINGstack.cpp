#include<iostream>
#include<stack>
using namespace std;
int main(){
    int dec;
    cout<<"enter decimal number:";
    cin>>dec;
    if(dec==0){
        cout<<"octal:0\n";
        return 0;
    }
    stack<int> s;
    int num=dec;
    while(num>0){
        int rem=num%8;
        s.push(rem);
        num=num/8;
    }
    cout<<"octal equivalent of "<<dec<<" is :";
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}