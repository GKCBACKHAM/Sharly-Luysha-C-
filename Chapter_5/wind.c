#include <stdio.h>

int main()
{
    int speed;
    printf("Enter the speed of the wind: ");
    scanf("%d", &speed);
    if (speed < 1)
        printf("Calm");
    else if (speed < 4)
        printf("Light air");
    else if (speed < 28)
        printf("Breeze");
    else if (speed < 48)
        printf("Gale");
    else if (speed < 64)
        printf("Storm");
    else
        printf("Hurricane");
    return 0;
}