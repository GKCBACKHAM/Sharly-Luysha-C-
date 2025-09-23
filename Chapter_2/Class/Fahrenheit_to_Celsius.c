#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    printf("Please enter a Fahrenheit temperature:");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8;
    printf("Celsius equivalent: %.1f", celsius);
    return 0;
}