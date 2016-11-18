#include <stdio.h>
#include <stdlib.h>
int stack1[10], stack2[10];
int tos1= -1;
int tos2= -1;
int tosperm=-1;

int main()
{

    do
    {
        printf("Enter option:\n1. Add\n2. Delete\n3. Display\n");
        scanf("%d", &n);
        if(n==1)
        {
            printf("Enter element: ");
            scanf("%d", &elem);
            push1(elem);
        }
        if(n==2)
        {
            for(i=0; i<tos1; i++)
            {
                transfer= pop();
                push2(transfer);
            }
        }
        if(n==3)
        {
            display(stack2);
        }
        printf("Do u wanna continue?\n1. Yes\n2. No\n");
        scanf("%d", &ch);
    }while(ch!=2);
}
void push1(int elem)
{
    stack1[++(tos1)]=elem;
    tosperm++;
}

void push2(int elem)
{
    stack2[++(tos2)]=transfer;

}

int pop()
{
    return stack[tos1--];
}
void display(int stack[])
{
    int i;
    for(i=(*tos); i>=0; i--)
    {
        printf("%d\t", *(ptr+i));
    }
}
