//WAP TO INSERT AN ELEMENT IN ARRAY
#include<stdio.h>
int main(){
    int n,pos,a[100];
    // int num;
    printf("enter the number of elements=");
    scanf("%d",&n);
    printf("enter the elements=");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // printf("enter element to delete-");
    // scanf("%d",&num);
    printf("enter position-");
    scanf("%d",&pos);
    for(int i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }

    // if(n>=100){
    //     printf("array is full,you cannot insert");
    //     printf("\n");
    //     return 1;
    // }
    // else{
    // for(int i=n-1;i>=pos-1;i--){
    //     a[i+1]=a[i];
    // }
    // a[pos-1]=num;

// }
    printf("this is anamika,here is my new array after deleting element-");
    // printf("this is anamika,here is my new array after inserting element-");
    printf("\n");
    for(int i=0;i<n-1;i++){
        printf("%d",a[i]);
        printf("\n");

    }
    return 0;
}