#include <stdio.h>

int mm_1, dd_1, yy_1, mm_2, dd_2, yy_2;

int main()
{
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm_1, &dd_1, &yy_1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm_2, &dd_2, &yy_2);
    if (yy_1 < yy_2 || (yy_1 == yy_2 && mm_1 < mm_2) || (yy_1 == yy_2 && mm_1 == mm_2 && dd_1 < dd_2))
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", mm_1, dd_1, yy_1, mm_2, dd_2, yy_2);
    else if (yy_1 == yy_2 && mm_1 == mm_2 && dd_1 == dd_2)
        printf("%d/%d/%02d is the same date as %d/%d/%02d\n", mm_1, dd_1, yy_1, mm_2, dd_2, yy_2);
    else
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", mm_2, dd_2, yy_2, mm_1, dd_1, yy_1);
    return 0;
}