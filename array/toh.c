#include<stdio.h>
void towerOFhanoi(int n,char src[],char helper[],char dest[]){
    if(n==1){
        printf("transfer disk %d from %s to %s\n",n,src,dest);
    }
    else{
        towerOFhanoi(n-1,src,dest,helper);
        printf("transfer disk %d from %s to %s\n",n,src,dest);
        towerOFhanoi(n-1,helper,src,dest);
    }
}
void main(){
    int n;
    printf("enter n=");
    scanf("%d",&n);
    char src[50],helper[50],dest[50];
    scanf("%s",src);
    scanf("%s",helper);
    scanf("%s",dest);
    towerOFhanoi(n,src,helper,dest);
}