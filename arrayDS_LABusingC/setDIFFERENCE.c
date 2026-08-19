#include<stdio.h>
int main(){
    int n1,n2;printf("enter no. of elements in set 1 and set 2:");
    scanf("%d%d",&n1,&n2);
    int set1[n1],set2[n2];
    printf("enter elements in set1:");
    for(int i=0;i<n1;i++){
        scanf("%d",&set1[i]);
    }
    printf("enter elements in set2:");
    for(int i=0;i<n2;i++){
        scanf("%d",&set2[i]);
    }
    printf("set difference=");
    //1 2 3 4
    for(int i=0;i<n1;i++){//1 2
        int c=0;
        for(int j=0;j<n2;j++){
            if(set1[i]!=set2[j]){
                c++;
            }
        }
        if(c==n2){
            printf("%d ",set1[i]);
        }
    }
    //a=1 2 3,4,5 b=1 6
    return 0;
}