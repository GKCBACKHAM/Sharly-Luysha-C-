#include <stdio.h>

int main()
{
    double radius, volume;
    printf("Please enter the radius of the sphere:");
    scanf("%lf", &radius);
    volume = 3.1415926 * radius * radius * radius * 4 / 3;
    printf("The volume of the sphere is: %lf", volume);
    return 0;
}