//WAP TO FIND MISSING NUMBER IN ARRAY
#include<stdio.h>
int main(){
    int n;
    printf("enter no. of elements-");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in array-");//n=5
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    //1,2,3,4,5
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int total=((max+1)*(max))/2;//18
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];//sum=15
    }
    int missNO=total-sum;//3
    printf("missing number in array=%d",missNO);
    return 0;
}