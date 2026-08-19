#include<iostream>
#include<vector>
using namespace std;
int main(){
    int v,e;
    cout<<"enter vertex and edges:";
    cin>>v>>e;
    vector<int>adj[v];
    for(int i=1;i<=e;i++){
        int a,b;
        cout<<"enter a and b:";
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);//for directed graph this lineshould not be used.
    }
    for(int i=0;i<v;i++){
        cout<<i<<":";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<",";
        }
        cout<<endl;
    }
    return 0;
}