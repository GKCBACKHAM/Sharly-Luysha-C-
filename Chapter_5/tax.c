#include <stdio.h>

int main()
{
    double Income, Tax;
    scanf("%lf", &Income);
    if (Income <= 750)
        Tax = Income * .01;
    else if (Income <= 2250)
        Tax = 7.5 + (Income - 750) * .02;
    else if (Income <= 3750)
        Tax = 37.5 + (Income - 2250) * .03;
    else if (Income <= 5250)
        Tax = 82.5 + (Income - 3750) * .04;
    else if (Income <= 7000)
        Tax = 142.5 + (Income - 5250) * .05;
    else
        Tax = 230 + (Income - 7000) * .06;
    printf("%.2lf", Tax);
    return 0;
}