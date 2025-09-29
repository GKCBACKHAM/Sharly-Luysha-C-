#include <stdio.h>

int main()
{
    int num, num_0, sum = 0;
    printf("Enter a nunmber: ");
    scanf("%d", &num);
    num_0 = num;
    if (num == 0)
    {
        printf("The number 0 has 1 digits");
        return 0;
    }
    while (num > 0)
    {
        num /= 10;
        sum++;
    }
    printf("The number %d has %d digits", num_0, sum);
    return 0;
}