#include <stdio.h>
#include <ctype.h>

int main()
{
    char input[] = "a = b + 25 * c - 10";
    int i = 0;

    printf("Input Expression: %s\n\n", input);

    while(input[i] != '\0')
    {
        if(isalpha(input[i]))
        {
            printf("Identifier : %c\n", input[i]);
        }
        else if(isdigit(input[i]))
        {
            printf("Constant   : %c\n", input[i]);
        }
        else if(input[i]=='+' || input[i]=='-' || input[i]=='*' ||
                input[i]=='/' || input[i]=='=')
        {
            printf("Operator   : %c\n", input[i]);
        }
        i++;
    }

    return 0;
}