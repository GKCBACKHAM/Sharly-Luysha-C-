#include <stdio.h>

int numerator, denominator, reduced_numerator, reduced_denominator;

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    for (int i = 2; i <= denominator; i++)
    {
        while (numerator % i == 0 && denominator % i == 0)
        {
            numerator /= i;
            denominator /= i;
        }
    }
    *reduced_numerator = numerator;
    *reduced_denominator = denominator;
}

int main()
{
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);
    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);
    printf("In the lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);
    return 0;
}