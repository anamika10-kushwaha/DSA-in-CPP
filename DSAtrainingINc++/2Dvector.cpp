#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
vector<vector<int>>vv(10,vector<int>(5));//default initialization
for(int i=0;i<vv.size();i++){//column size
    for(int j=0;j<vv[i].size();j++){//size of i th row
        cout<<vv[i][j]<<" ";
    }
    cout<<"\n";
}
return 0;
}