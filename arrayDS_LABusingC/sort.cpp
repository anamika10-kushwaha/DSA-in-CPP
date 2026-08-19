#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int i,value;
    int n;printf("no. of elements in vector=");
    scanf("%d",&n);
    cout<<"enter values=";
    for(int i=0;i<n;i++){
       cin>>value;
       v.push_back(value);
    }
    cout<<"print previous unsorted array=";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // sort(v.begin(),v.end());
    sort(v.begin(),v.end());
    cout<<"print sorted array in ascending order=";
    for(int num:v){
        cout<<num<<" ";
    }
    sort(v.begin(),v.end(),greater<int>());
    cout<<"print sorted array in descending order=";
    for(int num:v){
        cout<<num<<" ";
    }
    return 0;
}