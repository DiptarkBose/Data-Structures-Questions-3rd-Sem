#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node
{
    char data;
    struct node *next;
}NODE;

NODE* push(NODE *list, int elem)
{
    NODE *temp=(NODE*) malloc(sizeof(NODE));
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

NODE* merge_sort(NODE *list1, NODE* list2)
{
    NODE *p1, *p2, *result;
    result=NULL;
    p1=list1;
    p2=list2;
    while(p1!=NULL || p2!=NULL)
    {
        if('p1->data' > 'p2->data')
        {
            result=push(result, p1->data);
            p1=p1->next;
        }
        if('p1->data' < 'p2->data')
        {
            result=push(result, p2->data);
            p2=p2->next;
        }
        if('p1->data' =='p2->data')
        {
            result=push(result, p2->data);
            p2=p2->next;
            p1=p1->next;
        }
    }

    return result;
}
void display(NODE *list)
{
    NODE *p;
    p=list;
    while(p!=NULL)
    {
        printf("%c\t", p->data);
        p=p->next;
    }
}
int main()
{
    int n1, n2, i;
    char elem;
    NODE *list1, *list2, *result;
    list1=NULL;
    list2=NULL;
    printf("Enter no. of chars for list 1 and list 2 respectively:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    printf("\n\nEnter chars for list 1 (in ascending order)\n");
    for(i=0; i<n1; i++)
    {
        scanf("%c", &elem);
        getchar();
        list1= push(list1, elem);
    }
    display(list1);
    printf("\nEnter chars for list 2 (in ascending order)\n");
    for(i=0; i<n2; i++)
    {
        scanf("%c", &elem);
        getchar();
        list2= push(list2, elem);
    }
    printf("The list after merge-sort:\n");
    result=merge_sort(list1, list2);
    display(result);

}
