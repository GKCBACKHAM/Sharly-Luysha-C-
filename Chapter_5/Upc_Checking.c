#include <stdio.h>

int upc[12], sum_1, sum_2, Check_digit;

int main()
{
    printf("Enter the frist 11 digits of a UPC: ");
    for (int i = 0; i < 12; i++)
        scanf("%1d", &upc[i]);
    for (int i = 0; i < 11; i += 2)
        sum_1 += upc[i];
    for (int i = 1; i < 10; i += 2)
        sum_2 += upc[i];
    Check_digit = 9 - ((3 * sum_1 + sum_2 - 1) % 10);
    if (Check_digit == upc[11])
        printf("VALID");
    else
        printf("NOT VALID");
    return 0;
}