#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    cout<<endl;
    int k;
    cout<<"enter value of k:";
    cin>>k;
    if( n % 9 !=0){
        int res=n*k;
        int ans=res%9;
        while(!(ans>=-99 && ans <=99)){
            ans=ans%9;
        }
        cout<<ans<<endl;
    }
    else{
        cout<<9<<endl;
    }
    return 0;
}