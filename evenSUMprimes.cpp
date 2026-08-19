#include<iostream>
#include<algorithm>
using namespace std;
bool fun(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i * i <= n;i++){
        if(n % i ==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;int ans=0;
    for(int i=a;i<=b;i++){
        bool prod=fun(i);
        int sum=0;int temp=i;
        if(prod==true){
            while(temp!=0){//11
                int g=temp%10;//1
                sum=sum+g;//2
                temp=temp/10;
            }
            if(sum % 2 ==0){
            ans++;
        }
        }
        }
        cout<<ans<<endl;
        return 0;
    }