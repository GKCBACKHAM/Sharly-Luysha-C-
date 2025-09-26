#include <stdio.h>

int Rule_0();
int Rule_1();
int Rule_2();
int Rule_3();
int n_enter;
int n0 = 1;

int Rule_0()
{
    if (n0 == n_enter + 1)
        return 1;
    n0++;
    return Rule_0() + Rule_1();
}

int Rule_1()
{
    if (n0 == n_enter + 1)
        return 1;
    n0++;
    return Rule_2();
}

int Rule_2()
{
    if (n0 == n_enter + 1)
        return 1;
    n0++;
    return Rule_3();
}

int Rule_3()
{
    if (n0 == n_enter + 1)
        return 1;
    n0++;
    return Rule_0() + Rule_1();
}

int main()
{
    scanf("%d", &n_enter);
    printf("%d", Rule_0() + Rule_1());
    return 0;
}