#include<iostream>
using namespace std;
int main(){
    int a[100],b[100],i,j,n,m,max,min;
    cout<<"enter no. of elements in a=";
    cin>>n;
    cout<<"enter elements in a=";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter no. of elements in b=";
    cin>>m;
    cout<<"enter elements in b=";
    for(j=0;j<m;j++){
        cin>>b[j];
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
            }
        }
    }
    return 0;
}