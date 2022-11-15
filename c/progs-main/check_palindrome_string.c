#include <stdio.h>
#include <string.h>

#define MAX 100

int palindrome(char str[]); // Function prototype

void main() // Main Function
{
    char str[MAX];

    printf("Enter a string: ");
    scanf("%s", str);

    if (palindrome(str) == 0)
        printf("The string is palindrome.");
    else
        printf("The string is not palindrome.");
}

int palindrome(char str[]) // Function definition
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