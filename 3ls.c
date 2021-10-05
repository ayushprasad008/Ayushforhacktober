#include<stdio.h>
#include<stdlib.h>
struct node
{
 int info;
 struct node*next;
};
struct node *Getnode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void Traversal(struct node *list)
{
    struct node *p;
    p=list;
    while(p!=NULL)
    {
        printf(" %d",p->info);
        p=p->next;
    }

}
void RTraversal(struct node *list)
{
    struct node *p;
    p=list;
    if(p==NULL)
        return;
    else
    {
        RTraversal(p->next);
        printf(" %d",p->info);
    }


}
void InsBeg(struct node **list,int x)
{
    struct node *p;
    p=Getnode();
    p->info=x;
    p->next=*list;
    *list=p;
}
void PairWiseSwap(struct node **list)
{
    struct node *p,*q;
    int x;
    p=*list;
    q=p->next;
    while(p!=NULL && q!=NULL)
    {
        x=p->info;
        p->info=q->info;
        q->info=x;
        p=p->next->next;
        if(q->next!=NULL)
              q=q->next->next;
    }
}
void main()
{
    struct node *START;
    START=NULL;
    int z;
    InsBeg(&START,100);
    InsBeg(&START,200);
    InsBeg(&START,300);
    InsBeg(&START,900);
    InsBeg(&START,400);
    Traversal(START);
    printf("\n");
    RTraversal(START);

}

