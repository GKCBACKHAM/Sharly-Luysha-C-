#include <stdio.h>

int month_to_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int month_to_dayspeacial[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int year_of_day(int month, int day, int year)
{
    int sum;
    if (year % 4 != 0)
    {
        for (int i = 0; i < month - 1; i++)
            sum += month_to_day[i];
        sum += day;
    }
    else
    {
        for (int i = 0; i < month - 1; i++)
            sum += month_to_dayspeacial[i];
        sum += day;
    }
    return sum;
}

int main()
{
    int m, d, y;
    printf("Please enter the date(mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);
    printf("%d", year_of_day(m, d, y));
    return 0;
}