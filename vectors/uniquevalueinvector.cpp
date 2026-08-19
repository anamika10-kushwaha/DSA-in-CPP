#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,1,7,2,7};
    int ans=0;
    for(int value:vec){
        ans=ans^value;
    }
    cout<<"unique value="<<ans<<endl;
    return 0;
}