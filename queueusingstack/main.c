#include <stdio.h>
#include <stdlib.h>

int top=-1;
int main()
{
    int stack1[10], stack2[10];
    int *ptr1, *ptr2;
    ptr1=stack1;
    ptr2=stack2;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    printf("Enter elements in stack");
    do
    {
        printf("Choose 1 option\n1. Add\n2. Delete\n3. Peek");
        scanf("%d", &ch);
        if(ch==1)
        {
            push(ptr1, elem);
            count++;
        }
        if(ch==2)
        {
            printf("Before deletion\n");
            for(i=0; i<count; i++)
            {
                 push((ptr2+i), pop(ptr1));
            }
            for(i=0; i<count; i++)
            {
                  printf("%d", *(ptr2+i));
            }



            for(i=0; i<count-1; i++)
                push(ptr1, pop(ptr2));
        }
        printf("Do u wanna continue?\n1. Yes\n2. No");
        scanf("%d", &con)
    }while(con!=2)
}
void push(int *ptr, int elem)
{
    *(ptr+(++top))=elem;
}
int pop(int *ptr)
{
    return (*(ptr+top));
}
