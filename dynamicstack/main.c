#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tos=-1, elem, n, ch, cont;
    printf("Enter no. of elements u wanna enter: ");
    scanf("%d", &n);
    int *ptr= (int*) calloc(n, sizeof(int));
    do
    {
        printf("Enter operation:\n1. Push\n2. Pop\n3. Display\n");
        scanf("%d", &ch);
        if(ch==1)
        {
            printf("Enter element to be pushed: ");
            scanf("%d", &elem);
            push(ptr, &tos, elem, &n);
        }
        if(ch==2)
        {
            elem=pop(ptr, &tos);
            printf("%d\n", elem);
        }
        if(ch==3)
        {
            display(ptr, &tos);
        }
        printf("Do u wanna continue?\n1. Yes\n2. No\n");
        scanf("%d", &cont);

    }while(cont!=2);
}
void push(int *ptr, int *tos, int elem, int *n)
{
    int change;
    change= *n;

    if(*tos== *n-1)
    {
        printf("Overflow occurred. Creating double sized queue...\n\n");
        ptr= (int*)realloc(2*change, sizeof(int));
        *(ptr+(++*tos))=elem;
        *n=2*change;
    }

    else
        *(ptr+(++*tos))=elem;
}

int pop(int *ptr, int *tos)
{
    return (*(ptr+((*tos)--)));
}

void display(int *ptr, int *tos)
{
    int i;
    for(i=0; i<=(*tos); i++)
        printf("%d\t", *(ptr+(*tos)));
}
