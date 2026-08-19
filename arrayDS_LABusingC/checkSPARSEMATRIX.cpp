#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter number of rows:";
    cin>>m;
    cout<<"enter number of columns:";
    cin>>n;
    int arr[m][n];
    cout<<"enter the elements:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int zerocount=0;int total=m*n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
                zerocount++;
            }
        }
    }
    if(zerocount>(total/2)){
        cout<<"given matrix is sparse matrix.";
    }
    else{
        cout<<"given matrix is not sparse.";
    }
    return 0;
}