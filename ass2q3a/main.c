#include <stdio.h>
#include <stdlib.h>
int arr[10];
int tos1=-1, tos2=10;

void push(int st, int elem)
{
    if(tos1!=tos2-1)
    {
        if(st==1)
        {
            arr[++tos1]=elem;
        }
        if(st==2)
        {
            arr[--tos2]=elem;
        }
    }
    else
        printf("The array is full.\n");
}
int pop(int st)
{
    if(tos1!= -1 && st==1)
        return arr[tos1--];
    else
        return arr[tos2++];
}
void display(int st)
{
    int i;
    if(st==1)
    {
        for(i=0; i<=tos1; i++)
            printf("%d\t", arr[i]);
    }
    if(st==2)
    {
        for(i=9; i>=tos2; i--)
            printf("%d\t", arr[i]);
    }
    printf("\n");
}
int main()
{
    int nah, elem, ch, st, non;
    do
    {
        printf("Which stack do u wanna operate on?\n1. Stack1\n2. Stack2\n");
        scanf("%d", &st);
        printf("Enter operation:\n1. Push\n2. Pop\n3. Display\n");
        scanf("%d", &ch);
        if(ch==1)
        {
            printf("Enter element to be pushed: ");
            scanf("%d", &elem);
            if(st==1)
                push(st, elem);
            else
                push(st, elem);
        }
        if(ch=2)
        {
            if(st==1)
                nah=pop(st);
            else
                nah=pop(st);

        }
        if(ch==3)
        {
            display(st);
        }
        printf("Do u wanna continue?\n1. Yes\n2. No\n");
        scanf("%d", &non);
    }while(non!=2);
}

