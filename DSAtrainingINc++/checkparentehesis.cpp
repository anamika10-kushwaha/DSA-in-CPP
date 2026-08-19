#include<iostream>
#include<vector>
#include<stack>
using namespace std;
stack<char>st;
bool brac(string s){
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                return false;
            }
            if(s[i]==')' || s[i]=='}' || s[i]==']'){
                char top=st.top();
                if((s[i]==')' && top=='(') ||( s[i]=='}' && top=='{' ) || (s[i]==']' && top=='[')){
                    st.pop();
                }
            }
        }
    }
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    bool result=brac(")");
    // cout<<result<<endl;
    if(result){
        cout<<"yes given bracket is balanced..";
    }
    else{
        cout<<"no, given bracket is not balanced.";
    }
    return 0;
}