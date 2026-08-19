#include<iostream>
#include<vector>
#include<queue>
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
    vector<int>status(n,-1);
    queue<int>q;
    q.push(3);
    status[3]=0;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(int j=0;j < adj[x].size();j++){
            int y=adj[x][j];
            if(status[y]==-1){
                status[y]=status[x]+1;
                q.push(y);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<i<<":"<<status[i]<<endl;
    }
    return 0;
}