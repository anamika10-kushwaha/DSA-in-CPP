#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];int j=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0];int profit1=0;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        int profit2=arr[i]-min;
        if(profit2>profit1){
            profit1=profit2;
        }
    }
    cout<<profit1;
    return 0;
}