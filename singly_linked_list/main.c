#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
} *NODE;

NODE push(int elem, NODE prev)
{
    NODE temp= (NODE) malloc(sizeof(struct node));
    temp->data=elem;
    temp->link=NULL;
    if(prev==NULL)
        return temp;
    else
    {
        NODE p;
        p=prev;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
        return prev;
    }

}
NODE pop(NODE prev)
{
    NODE p,s;
    p=prev;
    while(p->link->link!=NULL)
    {
        p=p->link;
    }
    s=p;
    p=p->link;
    printf("%d",p->data);
    free(p);
    s->link=NULL;
    return prev;
}

void display(NODE prev)
{
    NODE p;
    p=prev;
    while(p!=NULL)
    {
        printf("%d", p->data);
        p=p->link;
    }
}
int main()
{
    NODE prev;
    prev=NULL;
    int i, ch, elem;
    printf("Stack Operations\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
    do
    {
        printf("Choose Operation\n");
        scanf("%d", &ch);
        if(ch==1)
        {
            printf("Enter element to push: ");
            scanf("%d", &elem);
            prev=push(elem, prev);
        }
        if(ch==2)
          prev=pop(prev);
        if(ch==3)
            display(prev);
    }while(ch!=4);
}
