#include <stdio.h>

int main()
{
    float loan, rate, payment, mrate, p1, p2, p3;
    printf("Enter amount of loan:");
    scanf("%f", &loan);
    printf("Enter interest rate:");
    scanf("%f", &rate);
    printf("Enter monthly payment:");
    scanf("%f", &payment);
    mrate = rate / 1200;
    p1 = loan - payment + loan * mrate;
    p2 = p1 - payment + p1 * mrate;
    p3 = p2 - payment + p2 * mrate;
    printf("\nBalance remaining after frist payment: $%.2f\nBalance remaining after second payment: $%.2f\nBalance remaining after third payment: $%.2f\n", p1, p2, p3);
    return 0;
}