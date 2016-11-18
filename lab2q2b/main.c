#include <stdio.h>
#include <stdlib.h>

char* toUpper(char *name)
{
    char *name1;
    name1= (char*) calloc(1, sizeof(char));
    *name1=*name-32;
    return name1;
}

int main()
{
    char a;
    char *name, *uppercase;
    name=&a;
    printf("Enter any character\n");
    scanf("%c",name);
    uppercase=toUpper(name);
    printf("New : %c", *uppercase);
}
