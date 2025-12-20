#include <stdio.h>
#include <string.h>

#define MAX_WORD 20

static void trim_newline(char *s)
{
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n')
        s[len - 1] = '\0';
}

int main(void)
{
    char smallest[MAX_WORD + 1] = "";
    char largest[MAX_WORD + 1] = "";
    char word[MAX_WORD + 1] = "";
    printf("Enter a word: ");
    if (fgets(word, sizeof word, stdin) == NULL)
        return 0;
    trim_newline(word);
    strcpy(smallest, word);
    strcpy(largest, word);
    if (strlen(word) != 4)
        for (;;)
        {
            printf("Enter a word: ");
            if (fgets(word, sizeof word, stdin) == NULL)
                break;
            trim_newline(word);
            if (strcmp(word, smallest) < 0)
                strcpy(smallest, word);
            if (strcmp(word, largest) > 0)
                strcpy(largest, word);
            if (strlen(word) == 4)
                break;
        }
    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);
    return 0;
}