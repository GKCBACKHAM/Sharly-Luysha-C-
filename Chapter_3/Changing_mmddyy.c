#include <stdio.h>

int main()
{
    int day, month, year;
    scanf("%d/%d/%d", &month, &day, &year);
    printf("%4d%02d%2d", year, month, day);
    return 0;
}