#include<iostream>
using namespace std;
void swap(int*x,int*y){
    int c;
    c=*x;
    *x=*y;
    *y=c;
}
int main(){
    int a[100],i,n,max,min;
    cout<<"enter  number of elements in array=";
    cin>>n;
    cout<<"enter elements in array=";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    max=min=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        else if(a[i]<min){
            min=a[i];
        }
    }
    swap(&max,&min);
    cout<<"after swapping="<<endl;
    cout<<"max="<<max<<endl;
    cout<<"min="<<min<<endl;
    return 0;
}