#include <stdio.h>
//1 2 3 4 5 4 3
int main() {
    int n;
    printf("enter no. of elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("repeated elements are ");
    for(int i=0;i<n;i++){
        // int c=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d ",arr[i]);
                // c=1;
                break;
            }
        }
    }
    printf("\nnon repeated elements are ");
        for(int i=0;i<n;i++){//1 2 3 2 1
        int c=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                c++;
            }
        }
        if(c==1){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}