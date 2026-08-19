#include<iostream>
using namespace std;
int main(){
    int a[100],i,n,min;
    cout<<"enter no.of elements=";
    cin>>n;
    cout<<"enter elements=";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    min=a[0];
    for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<"min element="<<min<<endl;
    return 0;
}