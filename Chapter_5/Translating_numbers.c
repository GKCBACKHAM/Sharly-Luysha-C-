#include <stdio.h>

int number;

char english_words[][10] = {
    "zero", "one", "two", "three", "four",
    "five", "six", "seven", "eight", "nine",
    "ten", "eleven", "twelve", "thirteen", "fourteen",
    "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
    "twenty", "thirty", "forty", "fifty", "sixty",
    "seventy", "eighty", "ninety"
};

int main()
{
    printf("Enter a two-digit number: ");
    scanf("%2d", &number);
    if (number < 20)
        printf("In English: %s\n", english_words[number]);
    else
        printf("In English: %s-%s\n", english_words[18 + (number / 10)], english_words[number % 10]);
    return 0;
}