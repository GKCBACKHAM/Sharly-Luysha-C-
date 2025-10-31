#include <stdio.h>
#include <math.h>

double x;
double y = 1;

int main()
{
    printf("Enter a positive number: ");
    scanf("%lf", &x);
    while(fabs(y-(y+x/y)/2) >= .00001)
    {
        y = (y + x / y) / 2;
    }
    printf("Square root: %lf", y);
    return 0;
}
