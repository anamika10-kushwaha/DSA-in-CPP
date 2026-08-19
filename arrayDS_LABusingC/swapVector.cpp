#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v1;
    vector<int>v2;
    int i,value1,value2;
    int n;printf("no. of elements in vectors=");
    scanf("%d",&n);
    cout<<"enter values in vector1=";
    for(int i=0;i<n;i++){
       cin>>value1;
       v1.push_back(value1);
    }
    cout<<"enter values in vector2=";
    for(int i=0;i<n;i++){
       cin>>value2;
       v2.push_back(value2);
    }
    cout<<"print previous vector1=";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"print previous vector2=";
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<"after swapping=";
    v1.swap(v2);
    cout<<"vector 1=";
    for(int num:v1){
        cout<<num<<" ";
    }
    cout<<endl;
    cout<<"vector 2=";
    for(int nums:v2){
        cout<<nums<<" ";
    }
    return 0;
}