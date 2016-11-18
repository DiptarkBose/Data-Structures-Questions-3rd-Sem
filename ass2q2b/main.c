#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, nCk;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter k: ");
    scanf("%d", &k);
    nCk=fact(n)/(fact(k)*fact(n-k));
    printf("%d", nCk);
}
int fact(int n)
{
    if(n==0)
        return 1;

    return (n*fact(n-1));
}
