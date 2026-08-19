#include<iostream>
using namespace std;
int main(){
    int a[100],i,n,ele;
    cout<<"enter no.of elements=";
    cin>>n;
    cout<<"enter elements=";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter elements for search=";
    cin>>ele;
    for(i=0;i<n;i++){
        if(ele==a[i]){
            cout<<"index="<<i<<endl;
        }
    }
    return 0;
}