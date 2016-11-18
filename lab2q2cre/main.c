#include <stdio.h>
#include <stdlib.h>
void allocateMemory( int **ptop);
int main()
{
    int x;
    int *t;
    int **ptrtoptr;
    t=&x;
    ptrtoptr=&t;
    allocateMemory(ptrtoptr);
    printf("Address of t: %d\n Address of ptrtoptr: %d", t, ptrtoptr);
}
void allocateMemory (int **ptop)
{
    *ptop=(int*) calloc (1, sizeof(int));
    return;
}
