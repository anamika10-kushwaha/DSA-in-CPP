#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    cout<<"enter the number of vectors or size of array:";
    int n;cin>>n;
    vector<int>arr[n];
    //enter values in vectors present in array.
    for(int i=0;i<n;i++){
        int s;cout<<"enter size of vector"<<i+1<<endl;
        cin>>s;
        cout<<"enter element in vector"<<i+1<<endl;
        for(int j=0;j<s;j++)
        {
            int x;cin>>x;
            arr[i].push_back(x);
        }
    }
    cout<<endl;
    //printing
    for(int i=0;i<n;i++){
        for(int j:arr[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}