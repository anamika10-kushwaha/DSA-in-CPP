#include<iostream>
#include<vector>
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
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    int size=v.size();
    int capacity=v.capacity();
    cout<<"size="<<size<<endl;
    cout<<"capacity="<<capacity<<endl;
    return 0;
}