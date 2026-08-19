//tower of hanoi and its tree
#include<stdio.h>
void toh(int n,char a,char c,char b){
    if(n==1){
        printf("move %d from %c to %c",n,a,c);
    }
    else{
        toh(n-1,a,b,c);
        printf("move %d from %c to %c",n,a,c);
        toh(n-1,b,c,a);
    }
}
int main(){
    int n;char a,b,c;
    printf("enter number of discs=");
    scanf("%d",&n);
    toh(n,a,b,c);
    return 0;
}