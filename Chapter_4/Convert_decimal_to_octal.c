#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);
    printf("In octal, your number is: %05o", num);
    return 0;
}