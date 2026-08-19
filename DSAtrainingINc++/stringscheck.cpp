#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    string str;
    cout<<"enter your string in the binary format:";
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='0'){
            if(str[i+1]=='1' && str[i+2]=='1' && str[i+3]=='1' && str[i+4]=='1' && str[i+5]=='1'){
                str[i+6]='0';
            }
        }
    }
    cout<<"new string is:"<<str<<endl;
    return 0;
}