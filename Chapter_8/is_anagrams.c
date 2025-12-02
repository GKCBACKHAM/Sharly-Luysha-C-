#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Judging(const char *str1, const char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2)
        return 0;
    int count[26] = {0};
    for (int i = 0; i < len1; i++)
        if (isalpha(str1[i]))
            count[tolower(str1[i]) - 'a']++;
    for (int i = 0; i < len2; i++)
        if (isalpha(str2[i]))
            count[tolower(str2[i]) - 'a']--;
    for (int i = 0; i < 26; i++)
        if (count[i] != 0)
            return 0;
    return 1;
}

int main()
{
    char word1[100], word2[100];
    printf("Enter first word: ");
    fgets(word1, sizeof(word1), stdin);
    word1[strcspn(word1, "\n")] = '\0';
    printf("Enter second word: ");
    fgets(word2, sizeof(word2), stdin);
    word2[strcspn(word2, "\n")] = '\0';
    if (Judging(word1, word2))
        printf("The words are anagrams.");
    else
        printf("The words are not anagrams.");
    return 0;
}