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
    int max=arr[0],min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }
    int secLarge=arr[0],secMin=max;
    for(int i=0;i<n;i++){
        if(arr[i]>secLarge && arr[i]!=max){
            secLarge=arr[i];
        }
    }
    for(int i=0;i<n;i++){
       if(arr[i]<secMin && arr[i]!=min){
        secMin=arr[i];//2
       }
    }
    cout<<"second largest element in the array:"<<secLarge<<endl;
    cout<<"second smallest element in the array:"<<secMin<<endl;
}