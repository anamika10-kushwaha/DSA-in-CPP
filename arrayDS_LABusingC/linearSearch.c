//linear search
#include<stdio.h>
#include <stdbool.h>
int main(){
    int n,ele;
    printf("enter the number of elements=");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements=");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter element for search-");
    scanf("%d",&ele);
    bool flag=false;
    int c=0;
    for(int i=0;i<n;i++){
        if(ele==a[i]){
            flag=true;
            c++;
        }
    }
    if(flag==true){
        printf("%d found %d times",ele,c);
    }
    else{
        printf("%d not found",ele);
    }
    return 0;
}