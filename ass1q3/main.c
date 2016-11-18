#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int i;
    ptr=odd();
    for(i=0; i<10; i++)
    {
        printf("%d\t", ptr[i]);
    }
}
int* odd()
{
    int i=1, j=0, arr[10], count=0;
    int *ptr;
    ptr=&arr[0];
    do
    {
        if(i%2!=0)
        {
            ptr+j=i;
            count++;
            j++;
        }
        i++;

    }while(count<10);
    return ptr;
}
