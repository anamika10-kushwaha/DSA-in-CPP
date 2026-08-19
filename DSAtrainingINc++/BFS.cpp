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
    queue<int>q;
    vector<int>status(n,0);
    q.push(0);
    status[0]=1;
    cout<<"BFS order :";
    while(!q.empty()){
        int x=q.front();
        cout<<x<<",";
        q.pop();
        for(int j=0;j<adj[x].size();j++){
            int y=adj[x][j];
            if(status[y]==0){
                status[y]=1;
                q.push(y);
            }
        }
    }
    return 0;
}