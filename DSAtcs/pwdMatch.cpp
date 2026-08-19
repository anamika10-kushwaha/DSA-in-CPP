//left rotation
//right rotation
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1;string str2;string str3;int k;
    cout<<"enter the strings:";
    cin>>str1>>str2;
    int n;cout<<"enter n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size=str1.size();
    for(int i=0;i<n;i++){
        k=arr[i];
        if(arr[i]>0){
            k=arr[i]%size;
            str1=str1.substr(size-k,k)+str1.substr(0,size-k);
        }
        else{
            k=(arr[i]*(-1))%size;
            str1=str1.substr(k,size-k)+str1.substr(0,k);
        }
    }
    if(str1==str2){
        cout<<"password accepted"<<endl;
    }
    else{
        cout<<"try again"<<endl;
    }
    return 0;
}