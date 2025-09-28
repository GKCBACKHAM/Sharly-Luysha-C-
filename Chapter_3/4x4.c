#include <stdio.h>

int box[4][4], row[4], column[4], diagonal[2];

int main()
{
    printf("Enter the numbers from 1 to 16 in any order:");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4;j++)
            scanf("%d", &box[i][j]);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%2d\t", box[i][j]);
            row[i] += box[i][j];
        }
        printf("\n");
    }
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            column[i] += box[j][i];
    for (int i = 0; i < 4;i++)
        diagonal[0] += box[i][i];
    for (int i = 0; i < 4; i++)
        diagonal[1] += box[i][3-i];
    printf("Row sums: %d %d %d %d\n", row[0], row[1], row[2], row[3]);
    printf("Column sums: %d %d %d %d\n", column[0], column[1], column[2], column[3]);
    printf("Diagonal sums: %d %d", diagonal[0], diagonal[1]);
    return 0;
}