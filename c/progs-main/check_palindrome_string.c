// check wheather a string is palindrome or not

#include <stdio.h>
#include <string.h>

int palindrome(char str[]);

void main()
{
    char str[100];
    int i, len, flag = 0;
    printf("Enter a string: ");
    gets(str);
    palindrome(str);
    if (palindrome(str) == 1)
        printf("The string is palindrome.");
    else
        printf("The string is not palindrome.");
}

int palindrome(char str[])
{
    int i, len, flag = 0;
    len = strlen(str);
    for(i=0;i < len ;i++)
    {
        if(str[i] != str[len-i-1])
        {
            flag = 1;
            break;
        }
    }
    return flag;
}