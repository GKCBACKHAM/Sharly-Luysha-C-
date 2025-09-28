#include <stdio.h>

int main()
{
    int Up_1, Down_1, Up_2, Down_2;
    printf("Enter two fractions separated by a plus sign:");
    scanf("%d/%d+%d/%d", &Up_1, &Down_1, &Up_2, &Down_2);
    printf("The sum is %d/%d", Up_1*Down_2+Up_2*Down_1,Down_1*Down_2);
    return 0;
}