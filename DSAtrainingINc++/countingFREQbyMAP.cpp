#include<iostream>
using namespace std;
#include<map>
#include<unordered_map>
int main(){
    int n;
    cout<<"enter number of elements in array:";
    cin>>n;
    cout<<"enter elements in array:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int, int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    // cout<<mpp[23];
    //map stores all the values in sorted order
    int max=mpp[arr[0]];
    int min=mpp[arr[0]];
    int maxele=arr[0];
    int minele=arr[0];
    for(auto it:mpp){
        // int c=it.second;
        if(it.second>max){
            max=it.second;
            maxele=it.first;
        }
        else{
            if(it.second<min){
                min=it.second;
                minele=it.first;
            }
        }
        // cout<<it.first<<"->"<<it.second<<endl;
    }
    cout<<"element having maximum frequency:"<<maxele<<"and corresponding frequency is "<<max<<endl;
    cout<<"element having minimum frequency:"<<minele<<"and corresponding frequency is "<<min<<endl;
    return 0;
}