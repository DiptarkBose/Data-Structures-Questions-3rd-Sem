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
    printf("Number of students?");
    scanf("%d", &n);
    readDetails(n);
    computeTotal(n);
    display(n);

}
void readDetails(int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        printf("Enter name:");
        scanf("%s", studarray[i].name);
        printf("Enter 5 assignment scores\n");
        for(j=0; j<5; j++)
        {
            scanf("%d", &studarray[i].assgScores[j]);
        }
        printf("Enter 2 test scores\n");
        for(j=0; j<2; j++)
        {
            scanf("%d", &studarray[i].testScores[j]);
        }
        printf("Enter End-Sem Marks: ");
        scanf("%d", &studarray[i].endsemScore);

    }

}
void computeTotal(int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        studarray[i].totalScore=0;
        for(j=0; j<5; j++)
        {
            studarray[i].totalScore= studarray[i].totalScore + studarray[i].assgScores[j];
        }
        for(j=0; j<2; j++)
        {
            studarray[i].totalScore= studarray[i].totalScore + studarray[i].testScores[j];
        }
        studarray[i].totalScore= studarray[i].totalScore + studarray[i].endsemScore;
    }
}
void display(int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%s\n", studarray[i].name);
        printf("%d\n\n", studarray[i].totalScore);
    }
}

