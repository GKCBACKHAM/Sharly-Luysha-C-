#include <stdio.h>

float num, max = 0;

int main()
{
    do
    {
        printf("Enter a number: ");
        scanf("%f", &num);
        if (num > max)
            max = num;
    } while (num > 0);
    printf("The largest number entered was: %g\n", max);
    return 0;
}