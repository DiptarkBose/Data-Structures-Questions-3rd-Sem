#include <stdio.h>
#include <stdlib.h>

int queue[5];
int check=0, count=0;
void enqueue(int *ptr, int *ptr1, int elem)
{
        int *ch, *co, i;
        ch=&check;
        co=&count;

        if(*ptr1==5)
        {
            if(*ptr!=0)
            {
                for(i=0; i<(*ptr); i++)
                {
                  queue[i]=0;
                  *co=*co+1;
                }

                *ch=*ch+1;
            }
            else

            printf("\n********* Circular queue is Full now. No more elements accommodated!! ***********\n");
        }

        if(*ch==2)
        {
            if(*co>0)
            {
                for(i=0; i<(*co); i++)
                {
                    if(queue[i]==0)
                        {
                            queue[i]=elem;
                            *co=*co-1;
                        }

                }
            }

        }

        queue[++(*ptr1)]=elem;

        if(*ptr== -1)
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
