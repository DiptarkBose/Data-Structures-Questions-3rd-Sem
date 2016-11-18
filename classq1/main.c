#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int rollno;
    char name[30];
}STUDENT;

int main()
{
        STUDENT stuary[4];
        int i, j;
        STUDENT temp;
        printf("Enter student details\n");
        for(i=0; i<5; i++)
        {
            printf("Enter name:");
            scanf("%s", &stuary[i].name);
            printf("Enter roll. no.");
            scanf("%d", &stuary[i].rollno);
        }
        for(i=4; i>=0; i--)
        {
            for(j=0; j<=i; j++)
            {
                if(stuary[j].rollno>stuary[j+1].rollno)
                {
                    temp=stuary[j];
                    stuary[j]=stuary[j+1];
                    stuary[j+1]=temp;
                }
            }
        }
        printf("The names of students according to roll no.");
        for(i=0; i<5; i++)
        {
            printf("Name:");
            printf("%s", stuary[i].name);
            printf("Roll. no.");
            printf("%d", stuary[i].rollno);
        }
}
