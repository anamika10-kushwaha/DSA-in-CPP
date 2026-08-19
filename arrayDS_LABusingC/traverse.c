#include<stdio.h>
//WAP TO TRAVERSE THE ARRAY (input and output)
int main(){
    int n;
    printf("enter the number of elements=");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements=");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("my name is anamika from CSE-12,here is my output screen-");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}