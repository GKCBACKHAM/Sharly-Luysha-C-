#include <stdio.h>

char ch;
int sum;

int main()
{
    printf("Enter a sentence: ");
    do
    {
        ch = getchar();
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            sum++;
    } while (ch != '.');
    printf("Your sentence contains %d vowels.", sum);
    return 0;
}