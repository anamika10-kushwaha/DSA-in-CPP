//by using hashing
#include<iostream>
using namespace std;
int main(){
    // in numbers
    int n;
    cout<<"enter number of elements in array:";
    cin>>n;
    cout<<"enter elements in array:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // [1,2,4,1,5,2]
    int hash[12]={0};//creating hash array intialize with zero
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    // cout<<hash[6]<<endl;
    cout<<"enter number of elements for finding the frequencies:";
    int q;cin>>q;
    while(q--){
        int k;cin>>k;
        cout<<hash[k]<<endl;
    }
    // //in strings
    // string s;
    // cout<<"enter string:";
    // cin>>s;//@anamika@hash@code.
    // int hash[256]={0};
    // for(int i=0;i<s.size();i++){
    //     hash[s[i]]+=1;//auto converted.
    // }
    // cout<<hash['@'];
    // // int hash[26]={0};//abdada
    // // for(int i=0;i<s.size();i++){
    // //     hash[s[i]-'a']+=1;//a
    // // }
    // // char c;cin>>c;
    // // cout<<hash[c-'a'];
    return 0;
}