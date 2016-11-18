
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stack[8], tos[8], i, op, ch, con, n, elem;
    int p= -1;
    printf("The array is 8 units long. Enter no. of stacks: ");
    scanf("%d", &n);
    int limit;
    printf("The array is now divided into %d parts\n\n", n);
    for(i=0; i<n; i++)
    {
        tos[i]=p;
        p=p+(8/n);
    }
   do
   {
        printf("Choose which stack you wanna fuck?\n");
        for(i=1; i<=n; i++)
        {
            printf("%d. Stack %d\n", i, i);
        }
        scanf("%d", &ch);
        getchar();
        printf("Which operation do you wanna implement?\n1. Push\n2. Pop\n");
        scanf("%d", &op);
        getchar();
        if(op==1)
        {
            printf("Enter element to be pushed: ");
            scanf("%d", &elem);
            limit=(ch-1+(8/n));
            push(stack, &tos[ch-1], elem, limit);
             printf("Here is the array now:\n");
            for(i=0; i<8; i++)
            {
                printf("%d\t", stack[i]);
            }
        }
        if(op==2)
        {
            int popped=pop(stack, &tos[ch-1]);
            printf("The popped element is: %d", popped);
        }


    printf("\n\nDo you wanna continue?\n1. Yes\n2. No\n");
    scanf("%d", &con);
   }while(con!=2);

}
void push(int stack[], int *ptr, int elem, int limit)
{
    if((*ptr)!=limit)
    stack[++(*ptr)]=elem;
    else
        printf("Stack overflow!");
}
int pop(int stack[], int *ptr)
{
    return stack[(*ptr)--];
}
