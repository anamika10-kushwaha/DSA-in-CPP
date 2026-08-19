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
    }
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"maximum element in array:"<<max<<endl;//5
    cout<<"minimum element in array:"<<min<<endl;//1
    return 0;
}