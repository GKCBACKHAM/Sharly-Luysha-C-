#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[1000];
    char *s0, *s1, *s2;
    printf("Enter a message: ");
    fgets(str, sizeof(str), stdin);
    s0 = str;
    s1 = str;
    while (*s0 != '\0' && *s0 != '\n')
    {
        if (isalpha(*s0))
        {
            *s1++ = tolower(*s0);
        }
        s0++;
    }
    *s1 = '\0';
    s0 = str;
    s2 = s1 - 1;
    while (s0 < s2)
    {
        if (*s0 != *s2)
        {
            printf("No");
            return 0;
        }
        s0++;
        s2--;
    }
    printf("Yes");
    return 0;
}