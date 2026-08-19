#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    //sort the vector
    vector<int> v(5);
    cout<<"enter elements=";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<endl;
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    return 0;
}
    // int n;
    // cout<<"enter no. of elements=";
    // cin>>n;
    // vector<int> arr(n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
    // cout<<endl;
    // cout<<"old size-";
    // cout<<arr.size()<<endl;
    // // arr.push_back(10);
    // arr.pop_back();
    // cout<<"new vector"<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
    // cout<<endl;
    // cout<<"new size-";
    // cout<<arr.size()<<endl;
    // return 0;

// void change(int x[]){
//     x[0]=8;
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     cout<<"previous qrr[0]="<<arr[0]<<endl;//1
//     change(arr);
//     cout<<"after functioning arr[0]="<<arr[0]<<endl;//1
//     return 0;
// }
