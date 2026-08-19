#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter sides of triangle=";
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"triangle is equilateral";
    }
    else if((a==b || a==c) && (a!=b || a!=c)){
        cout<<"triangle is isosceles";
    }
    else{
        cout<<"triangle is scalene";
    }
    return 0;
}