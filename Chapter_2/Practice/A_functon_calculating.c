#include <stdio.h>

int main()
{
    double x, ans;
    printf("Enter your x:");
    scanf("%lf", &x);
    ans = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
    printf("The answer is: %lf", ans);
    return 0;
}