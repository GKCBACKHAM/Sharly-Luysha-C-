#include <stdio.h>

int main()
{
    int GS1_prefix, Group_identifier, Publisher_code, Item_number, Check_digit;
    printf("Enter ISBN:");
    scanf("%d-%d-%d-%d-%d", &GS1_prefix, &Group_identifier, &Publisher_code, &Item_number, &Check_digit);
    printf("GS1_prefix: %d\nGroup_identifier: %d\nPublisher_code: %d\nItem_number: %d\nCheck_digit: %d", GS1_prefix, Group_identifier, Publisher_code, Item_number, Check_digit);
    return 0;
}