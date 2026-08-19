unique values in array
#include<iostream>
using namespace std;
int main(){
    int a[100],i,j,n,uni;//1 2 2 3 4 1 4
    cout<<"enter no. of elements in array=";
    cin>>n;
    cout<<"enter elements in array:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"unique values are=";
    for(i=0;i<n;i++){
        int c=0;
        for(j=0;j<n;j++){
            if(a[i]!=a[j]){
                c++;
            }
    }
    if(c==n-1)
        cout<<a[i]<<" ";
    }
    cout<<endl;
return 0;
}