#include <stdio.h>
#include <stdlib.h>
int queue[10];
void enqueue(int *ptr, int *ptr1, int elem)
{
        queue[++(*ptr1)]=elem;
        if(*ptr=-1)
            *ptr=*ptr+1;
}
void dequeue(int *ptr)
{
    //FIFO
    *ptr=*ptr+1;
}

int peek(int *ptr)
{
    return(queue[*ptr]);
}

void display(int *ptr, int *ptr1)
{
    int i;
    for(i=(*ptr); i<=(*ptr1); i++)
        printf("%d\t", queue[i]);
}

int main()
{
    int front=-1, rear=-1, elem, n, ch;

    do{
    printf("Choose an option:\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n");
    scanf("%d", &n);
    if(n==1)
    {
        printf("Enter element to enqueue: ");
        scanf("%d", & elem);
        enqueue(&front, &rear, elem);
    }
    if(n==2)
    {
        dequeue(&front);
    }
    if(n==3)
    {
        int peeks= peek(&front);
        printf("%d", peeks);
    }
    if(n==4)
    {
        display(&front, &rear);
    }
    printf("\nDo you wanna continue\n1. Yes\n2. No\n");
    scanf("%d", &ch);
    }while(ch!=2);
}
