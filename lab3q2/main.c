#include <stdio.h>
#include <stdlib.h>
void fibonacci(int a, int b, int n);
int main()
{
    int a=0, b=1, n;
    printf("Enter number of fibonacci elements\n");
    scanf("%d", &n);
    printf("%d", &a);
    fibonacci(a, b, n);
}
void fibonacci(int a, int b, int n)
{
    if(n>=0)
    {
    int sum;
    printf("%d\t", b);
    sum=a+b;
    a=b;
    b=sum;
    n--;
    fibonacci(a, b, n);
    }
    else
        return;
}
