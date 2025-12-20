#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool string_length(char *str)
{
    int length = 0;
    while (*str != '\0' && *str != '\n')
    {
        length++;
        str++;
    }
    return (length != 4) ? true : false;
}

bool str_smallest(char *str, char *smallest)
{
    while (1)
    {
        if ((*str == '\0' || *str == '\n') && (*smallest != '\0' || *smallest != '\n'))
            return true;
        else if ((*str == '\0' || *str == '\n') && (*smallest == '\0' || *smallest == '\n'))
            return false;
        else if ((*str != '\0' || *str != '\n') && (*smallest == '\0' || *smallest == '\n'))
            return false;
        if (*str < *smallest)
            return true;
        else if (*str > *smallest)
            return false;
        str++;
        smallest++;
    }
}

bool str_largest(char *str, char *largest)
{
    while (1)
    {
        if ((*str == '\0' || *str == '\n') && (*largest != '\0' || *largest != '\n'))
            return false;
        else if ((*str == '\0' || *str == '\n') && (*largest == '\0' || *largest == '\n'))
            return false;
        else if ((*str != '\0' || *str != '\n') && (*largest == '\0' || *largest == '\n'))
            return true;
        if (*str < *largest)
            return false;
        else if (*str > *largest)
            return true;
        str++;
        largest++;
    }
}

int main()
{
    char smallest[21] = "";
    char largest[21] = "";
    char str[21] = "";
    printf("Enter a word: ");
    fgets(str, 20, stdin);
    strcpy(smallest, str);
    strcpy(largest, str);
    if (string_length(str))
    {
        do
        {
            printf("Enter a word: ");
            fgets(str, 20, stdin);
            if (str_smallest(str, smallest))
                strcpy(smallest, str);
            if (str_largest(str, largest))
                strcpy(largest, str);
        } while (string_length(str));
    }
    printf("Smallest word: %s", smallest);
    printf("Largest word: %s", largest);
    return 0;
}