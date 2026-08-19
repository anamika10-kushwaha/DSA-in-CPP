#include<stdio.h>
int main(){
    int n;
    printf("enter number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("enter elements in array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("repeated elements are=");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("%d ",a[i]);
                break;
            }
        }
    }
    return 0;
}