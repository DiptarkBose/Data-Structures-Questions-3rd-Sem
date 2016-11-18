#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}NODE;

NODE* add(NODE* list, int elem)
{
    NODE *temp= (NODE*) malloc(sizeof(NODE));
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
        return list;
    }
}

NODE* delete(NODE* list)
{
    NODE *p;
    p=list;
    printf("Deleted item is: %d", p->data);
    p=p->next;
    free(list);
    return p;
}
void display(NODE *list)
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
    NODE *list;
    NODE *header= (NODE*) malloc(sizeof(NODE));
    list=NULL;
    header->data=0;

    int ch, elem;
    printf("Queue Operations:\n1. Add\n2. Delete\n3. Display\n4. Exit");
    do
    {
        printf("\nEnter operation: ");
        scanf("%d", &ch);
        if(ch==1)
        {
            printf("Enter element: ");
            scanf("%d", &elem);
            list=add(list, elem);
            header->next=list;
            (header->data)++;
        }
        if(ch==2)
        {
            list=delete(list);
            header->next=list;
            (header->data)--;
        }
        if(ch==3)
        {
            display(header);
        }
    }while(ch!=4);
}
