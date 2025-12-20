#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool is_palindrome(const char *message)
{
    char str1[1000] = "";
    const char *s0;
    char *s1, *s2;
    s0 = message;
    s1 = str1;
    while (*s0 != '\0' && *s0 != '\n')
    {
        if (isalpha(*s0))
        {
            *s1++ = tolower(*s0);
        }
        s0++;
    }
    *s1 = '\0';
    s0 = str1;
    s2 = s1 - 1;
    while (s0 < s2)
    {
        if (*s0 != *s2)
            return false;
        s0++;
        s2--;
    }
    return true;
}

int main()
{
    char str[1000] = "";
    printf("Enter a message: ");
    fgets(str, sizeof(str), stdin);
    if (is_palindrome(str))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}