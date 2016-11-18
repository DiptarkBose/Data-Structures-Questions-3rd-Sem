#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10;
int stack[MAXSIZE];
int tos= 0;
int main()
{
    printf(")


}
bool isEmpty()
{
    if(tos==0)
        return 1;
    else
        return 0;
}
bool isFull()
{
    if(tos==MAXSIZE-1)
        return 1;
    else
        return 0;
}
void push(int data)
{
    if(isFull()!=1)
    {
        stack[tos]=data;
        tos++;
    }
    else
        printf("Stack is full\n");
}
void pop(int data)
{
    if(isEmpty()!=1)
    {
        data=stack[top];
        top--;
        return data;
    }
    else
        printf("The stack is empty");
}
