#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,e;
    cout<<"enter number of vertices and edges :";
    cin>>n;cin>>e;
    vector<int>adj[n];
    cout<<"enter end points:";
    for(int i=0;i<e;i++){
        // cout<<"enter end points:";
        int a,b;
        cin>>a;
        cin>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0;i<n;i++){
        cout<<i<<":";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<",";
        }
        cout<<"\n";
    }
    return 0;
}