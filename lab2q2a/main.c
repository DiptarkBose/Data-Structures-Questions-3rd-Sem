#include <stdio.h>
#include <stdlib.h>
void increment(int *x);
int main()
{
    int a;
    int *ptr;
    ptr=&a;
    printf("Enter any number\n");
    scanf("%d", ptr);
    increment(ptr);
    printf("New number is :%d", *ptr);
}
void increment(int *x)
{
    *x=*x+1;
    return;
}
