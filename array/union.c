#include <stdio.h>

int main() {
    int m,n; int uni[100],k=0;
    printf("enter no. of elements in sets:");
    scanf("%d%d",&m,&n);
    int set1[m],set2[n];
    printf("enter elements in set1:");
    for(int i=0;i<m;i++){
        scanf("%d",&set1[i]);
    }
    printf("enter elements in set2:");
    for(int i=0;i<n;i++){//1 3 6
        scanf("%d",&set2[i]);//3 8 1
    }
    for(int i=0;i<m;i++){
        uni[k]=set1[i];
        k++;
    }
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<m;j++){
            if(set2[i]!=set1[j]){c++;}
        }
        if(c==m){
            uni[k]=set2[i];
            k++;
        }
    }
    printf("union of two sets ={");
    for(int i=0;i<k;i++){
        printf("%d ",uni[i]);
    }
    printf("}");
    return 0;
}