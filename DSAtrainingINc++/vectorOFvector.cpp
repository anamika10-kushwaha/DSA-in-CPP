#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    vector<vector<int>>matrix;
    matrix.push_back({1,2});
    matrix.push_back({3,7,9,4});
    for(auto i:matrix){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}