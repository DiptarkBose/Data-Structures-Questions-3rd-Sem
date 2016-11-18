#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a[30], elem, mid, higher, lower, i;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter elements\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element\n");
    scanf("%d", &elem);
    mid=(n-1)/2;
    do
    {
        mid=(lower+higher)/2;
        if(elem>a[mid])
        {
            lower=mid;
            higher=(n-1);
        }
        else
        {
            lower=0;
            higher=mid;
        }

    }while(elem!=a[mid]);
    printf("The number you searched for is in %d", (mid+1), " position.");
}
