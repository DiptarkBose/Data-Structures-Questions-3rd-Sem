#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fib, n;
    printf("Enter n: ");
    scanf("%d", &n);
        fib=generatefib(n);
        printf("%d\t", fib);
}
int generatefib(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    return generatefib(n-1)+generatefib(n-2);
}
