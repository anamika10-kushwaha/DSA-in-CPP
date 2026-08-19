#include<iostream>
using namespace std;
int sumofelements(int a[],int n){
    int sum=0,i;
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    return sum;
}
int product(int a[],int n){
    int prod=1,i;
    for(i=0;i<n;i++){
        prod=prod*a[i];
    }
    return prod;
}
int main(){
    int a[100],i,n,sum=0,prod=1;
    cout<<"enter no. of elements=";
    cin>>n;
    cout<<"enter the elements in array=";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int z=sumofelements(a,n);
    cout<<"sum of elements="<<z<<endl;
    int p=product(a,n);
    cout<<"product of elements="<<p<<endl;
    return 0;
}