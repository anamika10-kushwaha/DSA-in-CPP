#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the coordinate points=";
    cin>>x>>y;
    if(x>0 && y>0){
        cout<<"point lies in first quadrant";
    }
    else if(x>0 && y<0){
        cout<<"point lies in fourth quadrant";
    }
    else if(x<0 && y<0){
        cout<<"point lies in third quadrant";
    }
    else if(x<0 && y>0){
        cout<<"point lies in second quadrant";
    }
    return 0;
}