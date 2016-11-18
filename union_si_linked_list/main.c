#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}NODE;
NODE* push(NODE *list, int elem)
{
    NODE *temp=(NODE*) malloc(sizeof(NODE));
    temp->data=elem;
    temp->next=NULL;

    if(list==NULL)
        return temp;
    else{
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

NODE* intersection_list(NODE *list1, NODE *list2)
{
    NODE *p1, *p2;
    NODE *result;
    p1=list1;
    p2=list2;
    int count;
    while(p2!=NULL)
    {
        count=0;
        p1=list1;
        while(p1!=NULL)
        {
            if(p2->data==p1->data)
                count++;
            p1=p1->next;
        }
        if(count>0)
            result=push(result, p2->data);

        p2=p2->next;
    }
    return result;
}
NODE* union_list(NODE *list1, NODE* list2)
{
    NODE *result;
    result=NULL;
    int count;
    NODE *p1, *p2;
    p1=list1;
    while(p1!=NULL)
    {
        result=push(result, p1->data);
        p1=p1->next;
    }
    p1=list1;
    p2=list2;
    while(p2!=NULL)
    {
        count=0;
        p1=list1;
        while(p1!=NULL)
        {
            if(p2->data==p1->data)
                count++;
            p1=p1->next;
        }
        if(count==0)
            result=push(result, p2->data);

        p2=p2->next;
    }
    return result;
}
int main()
{
    NODE *list1, *list2, *result;
    int n1, n2, i, elem;
    list1=NULL;
    list2=NULL;
    printf("Enter no. of elements for set A and set B respectively\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    printf("Enter elements for Set A:\n");
    for(i=0; i<n1; i++)
    {
        scanf("%d", &elem);
        list1=push(list1, elem);
    }
    printf("Set A:\n");
    display(list1);

    printf("\nEnter elements for Set B:\n");
    for(i=0; i<n2; i++)
    {
        scanf("%d", &elem);
        list2=push(list2, elem);
    }
    printf("Set B:\n");
    display(list2);
    printf("\n\nThe Union of above sets: \n");
    result=union_list(list1, list2);
    display(result);

    printf("\n\nThe Intersection of above sets: \n");
    result=intersection_list(list1, list2);
    display(result);

}
