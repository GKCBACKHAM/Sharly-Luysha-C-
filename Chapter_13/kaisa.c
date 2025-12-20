#include <stdio.h>

void encrypt(char *message, int shift)
{
    for (; *message != '\0'; message++)
    {
        char c = *message;
        if (64 < c && c < 91)
        {
            if (c + shift > 90)
                c += shift - 26;
            else
                c += shift;
        }
        if (96 < c && c < 123)
        {
            if (c + shift > 122)
                c += shift - 26;
            else
                c += shift;
        }
        *message = c;
    }
}

int main()
{
    char str[1000] = "";
    int num;
    printf("Enter message to be encrypted: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &num);
    encrypt(str, num);
    printf("%s", str);
    return 0;
}