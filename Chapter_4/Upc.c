#include <stdio.h>

int upc[11], sum_1, sum_2;

int main()
{
    printf("Enter the frist 11 digits of a UPC: ");
    for (int i = 0; i < 11; i++)
        scanf("%1d", &upc[i]);
    for (int i = 0; i < 11; i += 2)
        sum_1 += upc[i];
    for (int i = 1; i < 10; i += 2)
        sum_2 += upc[i];
    printf("Check digit: %d\n", 9 - ((3 * sum_1 + sum_2 - 1) % 10));
    return 0;
}