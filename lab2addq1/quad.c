#include<stdio.h>
#include<math.h>
void get_data(int *p,int *q,int *r)
{
    scanf("%d%d%d",p,q,r);
}
void quad(int *p,int *q,int *r,int *r1,int *r2)
{
    int disc,*d,res,*ch;
    //r1=&root1;r2=&root2;
    ch=&res;
    *d=sqrt((*q)*(*q)-(4)*(*p)*(*r));
    if(*d>0)
    {
        *r1=(-(*q)+(*d))/(2*(*p));
        *r2=-(*r1);
        *ch=1;
    }
    else if(*d==0)
    {
        *r1=-(*q)/(2*(*p));
        *r2=*r1;
        *ch=0;
    }
    else { *ch=-1;}

}
void show(int *r1,int *r2)
{
    printf("&d\n%d\n%",*r1,*r2);

}
int main()
{
    int a,b,c,root1,root2,*r1,*r2;
    r1=&root1;
    r2=&root2;
    get_data(&a,&b,&c);
    quad(&a,&b,&c,r1,r2);
    show(r1,r2);
    return 0;

}

