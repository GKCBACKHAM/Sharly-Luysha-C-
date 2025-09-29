#include <stdio.h>

int main(void)
{
    float commission_1, commission_2, per_value, value;
    int num;
    printf("Enter the number and the value per piece: ");
    scanf("%d%f", &num, &per_value);
    value = num * per_value;
    if (value < 2500.00f)
        commission_1 = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission_1 = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission_1 = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission_1 = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission_1 = 155.00f + .0011f * value;
    else
        commission_1 = 255.00f + .0009f * value;
    if (commission_1 < 39.00f)
        commission_1 = 39.00f;
    if (num < 2000)
        commission_2 = num * 33.03;
    else
        commission_2 = num * 33.02;
    printf("The original commission: $%.2f\nThe other: $%.2f", commission_1, commission_2);
    return 0;
}