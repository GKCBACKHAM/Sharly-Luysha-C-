#include <stdio.h>

int main()
{
    int num_1, num_2, num_3;
    printf("Enter phone number [(xxx) xxx-xxxx]:");
    scanf("(%d) %d-%d", &num_1, &num_2, &num_3);
    printf("You entered %d.%d.%d", num_1, num_2, num_3);
    return 0;
}