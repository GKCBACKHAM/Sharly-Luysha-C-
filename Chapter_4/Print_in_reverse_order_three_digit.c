#include <stdio.h>

int main()
{
    int num_1, num_2, num_3;
    printf("Enter a two-digit number: ");
    scanf("%1d%1d%1d", &num_1, &num_2, &num_3);
    printf("The reversal is: %d%d%d", num_3, num_2, num_1);
    return 0;
}