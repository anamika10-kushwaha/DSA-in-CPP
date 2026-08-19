#include<iostream>
// #include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // char str[]={'1','s','4','f','\0'};//cout str=1s4f but if i print this in array (cout<<arr)it prints the random addres
    //1s4f≡@ this output comes because we dont put null character at the end of strung
    // char str[100];
    // cout<<"enter the string:";
    // cin>>str;
    // cout<<str<<endl;
    // cout<<strlen(str)<<endl;
    //it only prints the string before space
    //getline
    // char str2[10];
    // cout<<"enter second string:";
    // cin.getline(str2,10);// @=delimiter
    // for(char i:str2){
    //     cout<<i<<endl;
    // }
    // cout<<str2<<endl;
    // char str[]="anamika kushwaha";int len=0;
    // for(int i=0;str[i]!='\0';i++){
    //     len++;
    // }
    // cout<<len<<endl;
    //sring in cpp=#include<string>
    // string str3="anamika";
    // cout<<str3.length()<<endl;
    // cout<<str3<<endl;
    // string str4="kushwaha";
    // string str5="auoeksu";
    // cout<<str3+" "+str4<<endl;
    // cout<<(str3==str5)<<endl;
    // cout<<(str3<str4)<<endl;//true=1
    // string newStr;
    // cout<<"enter new string:"<<endl;
    // // cin>>newStr;
    // getline(cin,newStr);
    // cout<<newStr<<endl;
    // char arr[]="hello";
    // cout<<arr<<endl;
    // int n=strlen(arr);
    // for(int i=0;i<n/2;i++){
    //     int temp=arr[i];
    //     arr[i]=arr[n-i-1];
    //     arr[n-i-1]=temp;
    // }
    // cout<<arr;
    // string str="anamika";
    string str;
    cout<<"enter:";
    cin>>str;
    string str2=str;
    reverse(str.begin(),str.end());
    if(str==str2){
        cout<<"string is palindrome"<<endl;
    }
    else{
        cout<<"not"<<endl;
    }
    // cout<<str;
    //checks palindrome

    return 0;
}