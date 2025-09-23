#include <stdio.h>

int main()
{
    float amount, tax_added;
    printf("Enter an amount:");
    scanf("%f", &amount);
    tax_added = amount * 1.05;
    printf("With tax added: %.2f", tax_added);
    return 0;
}