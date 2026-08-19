//BINARY SEARCH
#include<stdio.h>
int binarySEARCH(int arr[],int f,int l,int ele){
    if(f>l){
        return -1;//element not found
    }
    else{
        int mid=(f+l)/2;
        if(arr[mid]==ele){
            return mid;
        }
        else if(ele<arr[mid]){
            // l=mid-1;
            return binarySEARCH(arr,f,mid-1,ele);
        }
        else if(ele>arr[mid]){
            // f=mid+1;
            return binarySEARCH(arr,mid+1,l,ele);
        }
    }
}
int main(){
    int n;
    printf("enter noo. of elements in array:");
    scanf("%d",&n);
    int arr[n];int ele,f=0,l=n-1;
    printf("enter elements in sorted array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element for search:");
    scanf("%d",&ele);
    int result=binarySEARCH(arr,f,l,ele);
    if(result!=-1){
        printf("element founds at index %d",result);
    }
    else{
        printf("element not found in whole array");
    }
    return 0;
}