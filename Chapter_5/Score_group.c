#include <stdio.h>

int score;

int main()
{
    printf("Enter numerical grade: ");
    scanf("%d", &score);
    if (score < 0 || score > 100)
    {
        printf("Invalid score. Please enter a score between 0 and 100.\n");
        return 1;
    }
    switch (score / 10)
    {
    case 10:
    case 9:
        printf("Letter grade: A\n");
        break;
    case 8:
        printf("Letter grade: B\n");
        break;
    case 7:
        printf("Letter grade: C\n");
        break;
    case 6:
        printf("Letter grade: D\n");
        break;
    default:
        printf("Letter grade: F\n");
        break;
    }
    return 0;
}