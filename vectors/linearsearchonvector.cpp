#include<iostream>//linear search on vector
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    int n;
    cout<<"enter element for search=";
    cin>>n;
    for(int value:vec){
        if(value==n){
            cout<<"element found="<<value<<endl;
        }
    }
    return 0;
}