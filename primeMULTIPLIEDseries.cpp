#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool fun(int n){
    for(int i=2;i<n;i++){
        if(n % i ==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=2;i<n;i++){
        int a=fun(i);
        int b=fun(i+1);
        if(a== true){
            v[0]=i;
        }
        if(b==true){
            v[1]=
        }
    }
    return 0;
}