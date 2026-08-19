#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    vector<int>v;
    cout<<"enter 5 elements in vector:";
    for(int i=0;i<5;i++){
        int n;cin>>n;
        v.push_back(n);
    }
    // cout<<"start:"<<*v.begin();
    // cout<<*v.erase(v.begin()+1);//1 2 3 4 5
    cout<<*v.erase(v.begin()+1,v.end()-1);
    cout<<v.empty();//0 or 1
    // for(int i:v){
    //     cout<<i;
    // }
    // // vector<int>::iterator it;
    // for( auto it=v.begin();it!=v.end();it++){
    //     cout<<(*it)<<endl;
    // }
    // cout<<"fifthe pos is "<<v[5]<<endl;
    // // cout<<"error:"<<v.at(5);
    // try{
    //     cout<<v.at(5);
    // }
    // catch(out_of_range e){
    //     cout<<"exception caught:"<<e.what()<<endl;
    // }
    return 0;
}