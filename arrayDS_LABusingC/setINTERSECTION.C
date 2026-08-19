#include<stdio.h>
int main(){
    int n;printf("enter no. of elements:");
    scanf("%d",&n);
    int set1[n],set2[n];
    printf("enter elements in set1:");
    for(int i=0;i<n;i++){
        scanf("%d",&set1[i]);
    }
    printf("enter elements in set2:");
    for(int i=0;i<n;i++){
        scanf("%d",&set2[i]);
    }
    printf("intersection of two sets=");
    for(int i=0;i<n;i++){//1 2 3
        for(int j=0;j<n;j++){//1 3 5
            if(set1[i]==set2[j]){
                printf("%d ",set1[i]);
                break;
            }
        }
    }
    return 0;
}