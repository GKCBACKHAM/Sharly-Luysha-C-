#include <stdio.h>
#include <ctype.h>

int main()
{
    char words[1000];
    char *p = words;
    fgets(words, sizeof(words), stdin);
    // 保留字母，去除非字母，并且统一调整字母都为小写
    for (int i = 0; words[i] != '\0' && words[i] != '\n'; i++)
        if (isalpha(words[i]))
            *p++ = tolower(words[i]);
    *p = '\0';
    // 判断回文
    char *p0 = words;
    p--;
    for (long long unsigned int i = 0; i < (sizeof(words) - 1) / 2; i++)
        if (*p0++ != *p--)
        {
            printf("No");
            return 0;
        }
    printf("Yes");
    return 0;
}