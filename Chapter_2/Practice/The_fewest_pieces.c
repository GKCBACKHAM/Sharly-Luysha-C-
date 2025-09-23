#include <stdio.h>

int main()
{
    int amount, p1, p2, p3, p4;
    printf("Enter a dollor amount:");
    scanf("%d", &amount);
    p1 = amount / 20;
    p2 = (amount - p1 * 20) / 10;
    p3 = (amount - p1 * 20 - p2 * 10) / 5;
    p4 = amount - p1 * 20 - p2 * 10 - p3 * 5;
    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d", p1, p2, p3, p4);
    return 0;
}