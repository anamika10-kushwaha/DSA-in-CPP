#include<stdio.h>
int main(){
    int a[100],n,ele;
    printf("enter no. of elements:");
    scanf("%d",&n);
    printf("enter elements in array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter element to insert:");//5
    scanf("%d",&ele);int pos=0;//10 20 30
    for(int i=0;i<n;i++){
        if(ele>a[i]){
            pos++;
        }
    }
    for(int j=n-1;j>=pos;j--){
        a[j+1]=a[j];
    }
    a[pos]=ele;
    printf("array after insertion:");
    for(int i=0;i<=n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}