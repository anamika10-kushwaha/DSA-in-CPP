//indexed sequential search
#include<stdio.h>
int indexseqsearch(int arr[],int n,int ele){
    int f=0;int l=n-1;
    if(ele<arr[f] || ele>arr[l]){
        return -1;
    }
    else{
        int i=f;
        while(ele<arr[l] && ele>arr[i]){
            i=i+4;
        }
        if(ele==arr[i]){
            return i;
        }
        else{
            int li=i-1;
            int fi=i-4+1;
            for(int j=fi;j<=li;j++){
                if(ele==arr[j]){
                    return j;
                }
            }
            return -1;
        }
    }
}
int main(){
    int n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ele;
    printf("enter the element for search:");
    scanf("%d",&ele);
    int result=indexseqsearch(arr,n,ele);
    if(result!=-1){
        printf("element found at index %d",result);
    }
    else{
        printf("element not found.");
    }
    return 0;
}