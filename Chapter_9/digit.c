#include <stdio.h>

int digit(int num, int n)
{
    int num1 = num, sum = 0;
    while (num1)
    {
        num1 /= 10;
        sum++;
    }
    if (n > sum)
        return 0;
    else
        while (--n)
            num /= 10;
    return num % 10;
}

int main()
{
    int number, nn;
    printf("Enter the number and the n: ");
    scanf("%d %d", &number, &nn);
    printf("%d", digit(number, nn));
    return 0;
}