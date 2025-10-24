#include <stdio.h>

long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    double sum = 1.0;
    for (int i = 1; i <= n; i++)
    {
        sum += (double)1 / factorial(i);
    }
    printf("e = %.15f\n", sum);
    return 0;
}