#include <stdio.h>
#include <stdlib.h>
int checkstr(char str[], char c, int i, int count);
int main()
{
    int i=0, count=0;
    char str[100], ch;
    printf("Enter any string: ");
    gets(str);

    printf("Enter character: ");
    scanf("%c", &ch);

    count= checkstr(str, ch, i, count);
    printf("\nThe character occurs %d times.", count);
}
int checkstr(char str[], char c, int i, int count)
{

    if(str[i]=='\0')
        return count;
    if(str[i]==c)
    {
        return checkstr(str, c, i+1, count+1);
    }
    return checkstr(str, c, i+1, count);

}
