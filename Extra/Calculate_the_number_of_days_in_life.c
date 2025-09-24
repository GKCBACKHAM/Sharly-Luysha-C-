#include <stdio.h>

int birth_day, birth_month, birth_year, current_day, birth_month, birth_year, current_day, current_month, current_year, days, leap_sum;
int month_to_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void months_and_days()
{
    if (birth_month * 100 + birth_day <= 229 && 229 <= current_month * 100 + current_day)
        if (!(birth_year % 4))
            leap_sum++;
    for (; birth_month < current_month; birth_month++)
        days += month_to_days[birth_month - 1];
    days += current_day - birth_day;
}

int main()
{
    printf("Enter your birthday(year month day):");
    scanf("%d %d %d", &birth_year, &birth_month, &birth_day);
    printf("Enter the deadline(year month day):");
    scanf("%d %d %d", &current_year, &current_month, &current_day);
    for (; birth_year < current_year; birth_year++)
    {
        if (!(birth_year % 4))
            leap_sum++;
        days += 365;
    }
    months_and_days();
    printf("The number of days you have lived is: %d", days + leap_sum);
    return 0;
}