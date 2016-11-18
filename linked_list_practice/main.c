#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}NODE;

NODE* addRight(NODE* list, int elem)
{
    NODE *temp=(NODE*) malloc (sizeof(NODE));
    temp->data=elem;
    temp->next=NULL;
    if(list==NULL)
        return temp;
    else
    {
        NODE *p;
        p=list;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
        return(list);
    }
}

NODE* addLeft(NODE* list, int elem)
{
    NODE *temp=(NODE*) malloc (sizeof(NODE));
    temp->data=elem;
    temp->next=NULL;
    if(list==NULL)
        return temp;
    else
    {
        temp->next=list;
        return(temp);
    }
}

NODE* deleteLeft(NODE *list)
{
    NODE *p;
    p=list;
    printf("Deleted element is: %d", p->data);
    p=p->next;
    free(list);
    return p;
}

NODE* deleteRight(NODE *list)
{
    NODE *p;
    p=list;
    while(p->next->next!=NULL)
    {
        p=p->next;
    }
    printf("Deleted element is: %d", p->next->data);
    p->next=NULL;
    return list;
}


void display (NODE* list)
{
    NODE *p;
    p=list;
    while(p!=NULL)
    {
        printf("%d\t", p->data);
        p=p->next;
    }
}
int main()
{
    int elem, ch;
    NODE *list;
    list=NULL;
    printf("Operations\n1. Add Right\n2. Add Left\n3. Display\n4. Delete Left\n5. Delete Right\n6. Exit");
    do
    {
        printf("\nChoose one option\n");
        scanf("%d", &ch);
        if(ch==1)
        {
            printf("Enter element to be pushed: ");
            scanf("%d", &elem);
            list=addRight(list, elem);
        }

        if(ch==2)
        {
            printf("Enter element to be pushed: ");
            scanf("%d", &elem);
            list=addLeft(list, elem);
        }
        if(ch==3)
        {
            display(list);
        }

        if(ch==4)
        {
            list=deleteLeft(list);
        }

        if(ch==5)
        {
            list=deleteRight(list);
        }
    }while(ch!=6);
}
