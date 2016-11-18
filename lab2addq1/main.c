#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void getdata(int *p, int *q, int *r);
int quadratic(int *p, int *q, int *r, int *i, int *j, int *k, int*l, int *m);
void print_roots(int *p, int *q, int *r, int *i, int *j, int *k, int*l, int *m, int watch);
int main()
{
    int a, b, c, real, imaginary, root1, root2, root, which;
    int *p, *q, *r, *i, *j, *k, *l, *m;
    p=&a;
    q=&b;
    r=&c;
    i=&root1;
    j=&root2;
    k=&root;
    l=&real;
    m=&imaginary;
    getdata(p, q, r);
    which= quadratic(p, q, r, i, j, k, l, m);
    print_roots(p, q, r, i, j, k, l, m, which);
}
void getdata(int *p, int *q, int *r)
{
    printf("Enter the coefficients\n");
    scanf("%d%d%d", p, q, r);
}
int quadratic(int *p, int *q, int *r, int *i, int *j, int *k, int*l, int *m)
{
    int D;
    D=((pow(*q, 2))-(4*(*p)*(*r)));
    if(D>0)
    {
        *i=(-(*q)+sqrt(D))/(2*(*p));
        *j=(-(*q)-sqrt(D))/(2*(*p));
        return 1;
    }
    if(D<0)
    {
        *l= (-(*q)/(2*(*p)));
        *m=(sqrt(D)/(2*(*p)));
        return 2;
    }
    if(D=0)
    {
        *k= (-(*q)/(2*(*p)));
        return 3;
    }
}
void print_roots(int *p, int *q, int *r, int *i, int *j, int *k, int*l, int *m, int which)
{
    if(which==1)
    {
        printf("The roots are real:%d\t%d", *i, *j);
    }
    if(which==2)
    {
        printf("The roots are imaginary:\t");
        printf("%d", *l);
        printf("+i%d", *m);
        printf("\t%d", *l);
        printf("-i%d", *m);
    }
    if(which==3)
    {
        printf("The roots are equal: %d", *k);
    }
}
