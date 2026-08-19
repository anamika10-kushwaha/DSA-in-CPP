#include<iostream>
#include<algorithm>
#include<vector>
#include<array>
using namespace std;
int main(){
    int n;cout<<"enter n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int temp[100];int index=0;
    int i=0;int j=n-1;
    while(i<=j){
        temp[index++]=arr[j--];
        temp[index++]=arr[i++];
    }
    //     v.push_back(v[j]);
    //     v.push_back(v[i]);
    //     i++;j--;
    // }
    // for(int val:v){
    //     cout<<val;
    // }
    for(int i=0;i<index-1;i++){
        cout<<temp[i];
    }
    return 0;
}