#include<stdio.h>
#include<stdlib.h>
struct linkedList{
    int data;
    struct linkedList*next;
}*head,*p,*q;
void insertBEG(){
    struct linkedList node;
    q=(struct node*)malloc(sizeof(node));
    scanf("%d",&q->data);
    q->next=head;
    head=q;
}
void insertMID(){
    struct linkedList node;
    q=(struct node*)malloc(sizeof(node));
    scanf("%d",&q->data);
    q->next=p->next;
    p->next==q;
}
void insertEND(){
    struct linkedList node;
    p=head;
    while(p->next!=NULL){
        p=p->next;
        q=(struct node*) malloc(sizeof(node));
        scanf("%d",&q->data);
        p->next=q;
        q->next=NULL;
    }
}
int main(){
   int i,n;
   printf("enter no. of nodes:");
   scanf("%d",&n);
   typedef struct linkedList node;
   head=NULL;
   for(i=0;i<n;i++){
    if(head==NULL){
        p=(node*)malloc(sizeof(node));
        head=p;
        scanf("%d",&p->data);
        p->next=NULL;
    }
    else{
        q=(node*)malloc(sizeof(node));
        scanf("%d",&q->data);
        p->next=q;
        q->next=NULL;
        p=q;
    }
   }
   insertBEG();
   insertMID();
   insertEND();
   printf("linked list:");
   p=head;int c=0;
   while(p!=NULL){
    printf("%d ",p->data);
    printf("\n");
    p=p->next;
    c++;
   }
   printf("no. of nodes is %d",c);
   return 0;
}