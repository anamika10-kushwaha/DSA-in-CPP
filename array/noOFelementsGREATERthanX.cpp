#include<iostream>
using namespace std;
int main(){
    int arr[100],n;
    cout<<"enter no. of elements in array:";
    cin>>n;
    cout<<"enter elements in arrray:";
    for(int i=0;i<n;i++){
        cin>>arr[i];//1 2 3 4 5
    }
    int x,c=0;
    cout<<"enter x:";
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            c++;
        }
    }
    cout<<"no. of elements which is greater than x is "<<c<<endl;//2
    return 0;
}