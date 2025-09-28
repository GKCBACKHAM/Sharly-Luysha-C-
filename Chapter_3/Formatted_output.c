#include <stdio.h>

int main()
{
    int Item_number;
    float Uprice;
    char date[10];
    printf("Enter item number:");
    scanf("%d",&Item_number);
    printf("Enter unit price:");
    scanf("%f", &Uprice);
    printf("Enter purchase date (mm/dd/yyyy):");
    scanf("%s", date);
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%-d\t$%7.2f\t%s",Item_number,Uprice,date);
    return 0;
}