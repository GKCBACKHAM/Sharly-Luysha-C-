#include <stdio.h>

double base_fee1 = 30.0;
double base_fee2 = 150.0;
int included_hours1 = 10;
double extra_rate1 = 3.0;
int included_hours2 = 50;
double extra_rate2 = 2.5;

double calculate_fee(float hours);
void print_fee(int hours);

double calculate_fee(float hours)
{
    if (hours <= included_hours1)
        return base_fee1;
    if (hours < included_hours2)
        return base_fee1 + (hours - included_hours1) * extra_rate1;
    return base_fee2 + (hours - included_hours2) * extra_rate2;
}

void print_fee(int hours)
{
    double fee = calculate_fee(hours);
    printf("Fee: %.2f", fee);
}

int main(void)
{
    float hour;
    printf("Enter hours: ");
    scanf("%f", &hour);
    print_fee(hour);
    return 0;
}