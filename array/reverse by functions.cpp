#include<iostream>
#include<utility>
using namespace std;
void rev(int arr[],int size){
    int start=0,end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int i;
    int arr[]={1,2,3,4,5};
    int size;
    size=5;
    rev(arr,size);
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}