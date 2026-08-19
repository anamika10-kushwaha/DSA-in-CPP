#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>vec;//by default vector size is zero=M-1
    // cout<<vec[0];
    // vector<int>vec={1,2,3};=M-2//dynamically memory allocation
    // cout<<vec[0];
    // vector<int>vec(3,1);=M-3
    // cout<<vec[0]<<vec[1]<<vec[2];
    // vector<char>vec={'s','f','e'};
    // cout<<"size="<<vec.size()<<endl;//size=3
    // vector<int>vec;
    // cout<<"size="<<vec.size()<<endl;
    // vec.push_back(2);
    // vec.push_back(45);
    // vec.push_back(5);vec.push_back(7);
    // cout<<"after push_back size="<<vec.size()<<endl;
    // for(int i:vec){//for each loop
    //     cout<<i<<endl;
    // cout<<vec.pop_back();
    // cout<<"after pop_back size="<<vec.size()<<endl;
    // cout<<"front value="<<vec.front()<<endl;
    // cout<<"back value="<<vec.back()<<endl;
    // cout<<vec.at(1);
    vector<int>vec;
    cout<<vec.size()<<endl;
    vec.push_back(6);vec.push_back(2);vec.push_back(3);
    cout<<"after pushback size="<<vec.size()<<endl;
    cout<<"after pushback capacity="<<vec.capacity()<<endl;
    return 0;
}