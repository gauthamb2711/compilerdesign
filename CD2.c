#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a line: ");
    gets(str);

    if(str[0]=='/' && str[1]=='/')
    {
        printf("It is a Single Line Comment.");
    }
    else if(str[0]=='/' && str[1]=='*' &&
            str[strlen(str)-2]=='*' &&
            str[strlen(str)-1]=='/')
    {
        printf("It is a Multi Line Comment.");
    }
    else
    {
        printf("It is Not a Comment.");
    }

    return 0;
}