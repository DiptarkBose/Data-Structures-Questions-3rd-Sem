#include <stdio.h>
#include <stdlib.h>

typedef struct{

    char name[20];
    int assgScores[5];
    int testScores[2];
    int endsemScore;
    int totalScore;

}STUDENT;
STUDENT studarray[5];

int main()
{
    int n;
    STUDENT *ptr;
    printf("Number of students?");
    scanf("%d", &n);
    readDetails(n, ptr);
    computeTotal(n, ptr);
    display(n, ptr);

}
void readDetails(int n, STUDENT *ptr)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        ptr=&studarray[i];
        printf("Enter name: ");
        scanf("%s", ptr->name);
        printf("Enter 5 assignment scores:\n");
        for(j=0; j<5; j++)
        {
            scanf("%d", &ptr->assgScores[j]);
        }
        printf("Enter 2 test scores\n");
        for(j=0; j<2; j++)
        {
            scanf("%d", &ptr->testScores[j]);
        }
        printf("Enter End-Sem Marks: ");
        scanf("%d", &ptr->endsemScore);

    }

}
void computeTotal(int n, STUDENT *ptr)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        ptr=&studarray[i];
        ptr->totalScore=0;
        for(j=0; j<5; j++)
        {
            ptr->totalScore= ptr->totalScore + ptr->assgScores[j];
        }
        for(j=0; j<2; j++)
        {
            ptr->totalScore= ptr->totalScore + ptr->testScores[j];
        }
        ptr->totalScore= ptr->totalScore + ptr->endsemScore;
    }
}
void display(int n, STUDENT *ptr)
{
    int i;
    for(i=0; i<n; i++)
    {
        ptr=&studarray[i];
        printf("%s\n", ptr->name);
        printf("%d\n\n", ptr->totalScore);
    }
}

