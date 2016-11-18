#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum, i, n, arr[10];
    printf("Enter no.of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum=sumarr(arr, n-1);
    printf("The answer is: %d", sum);
}
int sumarr(int a[], int x)
{
    int sum=0;
    if(x>=0)
    sum=a[x]+sumarr(a, x-1);
    else
    return sum;
}
