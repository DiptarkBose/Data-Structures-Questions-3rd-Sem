#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char Name[50];
    int Rollno;

}STUDENT;
int main()
{
    int i, j, temp;
    STUDENT studentArray[4];
    for(i=0; i<4; i++)
    {
        printf("Enter rollno.\n");
        scanf("%d", &studentArray[i].Rollno);
    }
    printf("The sorted list\n");

    for(i=3; i>=0; i--)
    {
        for(j=0; j<i; j++)
        {
            if(studentArray[j].Rollno>studentArray[j+1].Rollno)
            {
                temp=studentArray[j];
                studentArray[j]=studentArray[j+1];
                studentArray[j+1]=temp;
            }
        }
    }
    for(i=3; i>=0; i--)
    {
        printf("%d\t", studentArray[i].Rollno);
    }

}
