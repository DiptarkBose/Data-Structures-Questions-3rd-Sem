#include <stdio.h>
#include <stdlib.h>

int sumArray(int a[], int size, int sum);
int main()
{
   int a[10],n,i,sum, summing=0;
   printf("Enter no. of elements\n");
   scanf("%d", &n);
   printf("Enter the elements\n");
   for( i=0; i<n; i++)
   {
       scanf("%d", &a[i]);
   }
   sum=sumArray(a, n, summing);
   printf("The sum of the array is: %d", sum);
}
int sumArray(int a[], int n, int sum)
{
    if(n!=0)
    {
        sum=sum+a[n-1];
        n--;
        sum=sumArray(a, n, sum);
    }
    else
        return sum;

}

