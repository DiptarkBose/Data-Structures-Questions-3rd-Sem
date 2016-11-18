#include <stdio.h>
#include <stdlib.h>

int sumarr(int a[], int n, int summing)
{
    if(n!=0)
    {
        summing=summing+a[n--];
        summing=sumarr(a, n, summing);
    }
    else
        return summing;
}

int main()
{
    int i, n, sum, arr[10], summing=0;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum=sumarr(arr, n-1, summing);
    printf("The sum is %d", sum);
}
