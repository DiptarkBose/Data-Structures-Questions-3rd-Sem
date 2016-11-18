#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int quantity;
    int distance_next;
    struct node *next;
}NODE;
NODE* add_station(NODE *list, int petrol, int dist)
{
    NODE *temp=(NODE*) malloc(sizeof(NODE));
    temp->quantity=petrol;
    temp->distance_next=dist;
    temp->next=list;
    if(list==NULL)
    {
        temp->next=temp;
        return temp;
    }

    else
    {
        NODE *p;
        p=list;
        while(p->next!=list)
            p=p->next;
        p->next=temp;
        return list;
    }
}
void display(NODE *list)
{
    NODE *p=list;
    while(p!=list)
    {
        printf("%d %d\t", p->quantity, p->distance_next);
        p=p->next;
    }
}
void search_start(NODE *list)
{
    NODE *p, *cont;
    p=list;
    int pet=0, cb=0;
    int count=0, deduct;
    do                      //Finding starting point
    {
        count++;
       if(p->quantity > p->distance_next)
       {
          printf("\n\nStart at Petrol Station%d ", count);
          pet=p->quantity;
          cont=p;
          cb++;
       }
       p=p->next;
    }while(cb==0);
    while(pet > cont->distance_next)                //Finding End point
    {
        deduct=cont->distance_next;
        cont=cont->next;
        pet=pet+cont->quantity-deduct;
        count++;
    }
    printf("\n\nStop at Petrol Station%d\n\n", count);


}
int main()
{
    int i, n, quan, dist;
    NODE *list;
    list=NULL;
    printf("Enter number of petrol stations: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter station%d details:\n", i+1);
        printf("\nEnter petrol quantity: ");
        scanf("%d", &quan);
        printf("\nEnter distance of next station: ");
        scanf("%d", &dist);
        list=add_station(list, quan, dist);
    }
    display(list);
    search_start(list);
}
