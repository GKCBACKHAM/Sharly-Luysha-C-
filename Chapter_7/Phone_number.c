#include <stdio.h>

char number[30];
int sum;

int main()
{
    printf("Enter phone number: ");
    scanf("%s", number);
    for (int i = 0; i < 30; i++)
    {
        if (number[i] == '\0')
            break;
        else
            sum++;
    }
    for (int i = 0; i < sum; i++)
    {
        if (number[i] == 65 || number[i] == 66 || number[i] == 67)
            printf("2");
        else if (number[i] == 68 || number[i] == 69 || number[i] == 70)
            printf("3");
        else if (number[i] == 71 || number[i] == 72 || number[i] == 73)
            printf("4");
        else if (number[i] == 74 || number[i] == 75 || number[i] == 76)
            printf("5");
        else if (number[i] == 77 || number[i] == 78 || number[i] == 79)
            printf("6");
        else if (number[i] == 80 || number[i] == 81 || number[i] == 82 || number[i] == 83)
            printf("7");
        else if (number[i] == 84 || number[i] == 85 || number[i] == 86)
            printf("8");
        else if (number[i] == 87 || number[i] == 88 || number[i] == 89 || number[i] == 90)
            printf("9");
        else
            printf("%c", number[i]);
    }
    return 0;
}