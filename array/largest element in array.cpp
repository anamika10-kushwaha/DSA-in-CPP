#include<iostream>
using namespace std;
int main(){
    int a[100],i,n,max;
    cout<<"enter no.of elements=";
    cin>>n;
    cout<<"enter elements=";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<"max element="<<max<<endl;
    return 0;
}