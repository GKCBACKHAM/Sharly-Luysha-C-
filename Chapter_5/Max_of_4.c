#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    if (num2 > num1)
    {
        num1 += num2;
        num2 = num1 - num2;
        num1 -= num2;
    }
    if (num4 > num3)
    {
        num3 += num4;
        num4 = num3 - num4;
        num3 -= num4;
    }
    if (num3 > num1)
        num1 = num3;
    if (num4 < num2)
        num2 = num4;
    printf("Largest: %d\nSmallest: %d", num1, num2);
    return 0;
}