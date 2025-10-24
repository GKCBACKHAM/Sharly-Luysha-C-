#include <stdio.h>

int main()
{
    int numerator, denominator;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);
    for (int i = 2; i <= denominator; i++)
    {
        while (numerator % i == 0 && denominator % i == 0)
        {
            numerator /= i;
            denominator /= i;
        }
    }
    printf("In the lowest terms: %d/%d\n", numerator, denominator);
    return 0;
}