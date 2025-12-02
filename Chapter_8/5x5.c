#include <stdio.h>

int num[5][5];
int sum;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 5; j++)
            scanf("%d", &num[i][j]);
    }
    printf("Row totals:");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            sum += num[i][j];
        printf(" %d", sum);
        sum = 0;
    }
    printf("\nColumn totals:");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            sum += num[j][i];
        printf(" %d", sum);
        sum = 0;
    }
    return 0;
}