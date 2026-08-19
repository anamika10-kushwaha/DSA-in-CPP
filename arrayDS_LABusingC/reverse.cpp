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
    cout<<"print previous vector=";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    reverse(v.begin(),v.end());
    cout<<"print reverse vector=";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}