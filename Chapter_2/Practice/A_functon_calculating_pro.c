#include <stdio.h>

int main()
{
    double x, ans;
    printf("Please enter your x:");
    scanf("%lf", &x);
    ans = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("The answer is: %lf", ans);
    return 0;
}