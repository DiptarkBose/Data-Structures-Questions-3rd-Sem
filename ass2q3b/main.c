#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 5
int top=0;
int main()
{
    int i, elem;
    int *ptr= (int*) calloc(MAXSIZE, sizeof(int));
    printf("Stack is created with 5 elements\n");
    printf("Start pushing bc!!\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", (ptr+i));
        elem= (*(ptr+i));
        push(elem, ptr);
    }

}
void push(int elem, int *ptr)
{
    int j;
    if(count==MAXSIZE-1)
    {
        for(j=0; j<count; j++)
            printf("%d\t", *(ptr+i));
    }

    else
    {
        *(ptr+top)=elem;
        top++;
    }

}

