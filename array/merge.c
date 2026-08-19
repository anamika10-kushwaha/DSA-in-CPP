#include<stdio.h>
int main(){
    int m,n;
    printf("enter no. of elements in arrays:");
    scanf("%d%d",&m,&n);
    int arr1[m],arr2[n];
    printf("enter elements in first array:");
    for(int i=0;i<m;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter elements in second array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    int arr3[m+n];int i,j,k;
    i=j=k=0;
    while(i<m && j<n){
        if(arr1[i]<=arr2[j]){
            arr3[k]=arr1[i];
            i++;k++;
        }
        // else if(arr1[i]==arr2[j]){
        //     arr3[k]=arr2[j];
        //     k++;j++;
        // }
        else {
            arr3[k++] = arr2[j++];
        }

    }
    while(i<m){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<n){
        arr3[k]=arr2[j];
        k++;j++;
    }
    printf("merging array:");
    for(int k=0;k<(m+n);k++){
        printf("%d ",arr3[k]);
    }
    return 0;
}