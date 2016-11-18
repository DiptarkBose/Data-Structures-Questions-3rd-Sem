#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10

int main()
{
  int queue[MAX_SIZE];
  int n, ch, num, front=- 1, rear= -1;

  do
  {
    printf("Choose one option:\n1. Add element to queue\n2. Delete element from queue\n3. Peek at the first element\n");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
        {
         printf("Enter the new element: ");
         scanf("%d", &num);
         enqueue(queue, &front, &rear, num);

         printf("The new queue looks like:\n");
         displayQ(queue, &front, &rear);
         break;
        }

        case 2:
        {
         dequeue(queue, &front,& rear);
         printf("The new queue looks like:\n");
         displayQ(queue, &front, &rear);
         break;
        }

        case 3:
        {
          peek(queue);
          break;
        }



    printf("\n\n");
    printf("Do you want to continue?\n1. Yes\n2. No\n");
    scanf("%d", ch);
  }
  }while(ch!=2);
}

int isFull(int queue[], int *rear)
{
    if(rear== &queue[MAX_SIZE-1])
        return 1;
    else
        return 0;
}
int isEmpty (int queue[], int *front, int *rear)
{
    if(*front == *rear)
    {
        *front= -1;
        *rear= -1;
        return 1;
    }
    else
        return 0;

}

void enqueue(int queue[], int *front, int *rear, int data)
{
    if(isFull(queue, &rear)==0)
    {
        if(isEmpty(queue, &front, &rear)==1)
        {
            front=queue[0];
            rear=queue[0];
        }
        else
            rear=rear+1;

        *rear=data;

    }
    else
        printf("The queue is full...");
}
void dequeue(int queue[], int *front, int *rear)
{
    if(isEmpty(queue, &front, &rear)==0)
    {
        printf("The first element has been deleted...");
        front= front +1;
    }
    else
        printf("How can I remove an element when the queue is empty? Fuck you!");
}
void peek(int queue, int *front)
{
    printf("%d", *front);
}
void displayQ(int queue, int *front, int *rear)
{
    int *p;
    front=queue;
    for(p=front; p<=rear; p++)
    {
        printf("%d", *p);
    }
}
