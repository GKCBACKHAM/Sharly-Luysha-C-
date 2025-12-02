#include <stdio.h>

void selection_sort(int arr[], int n)
{
    if (n <= 1)
        return;

    int max = arr[0];
    int num = 0; /* index of current max, initialize to 0 */
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            num = i;
        }
    }

    /* place the max element at the end */
    arr[num] = arr[n - 1];
    arr[n - 1] = max;

    /* sort the remaining n-1 elements */
    selection_sort(arr, n - 1);
}

int main()
{
    int sum;
    printf("Enter how many numbers: ");
    scanf("%d", &sum);
    if (sum <= 0)
    {
        printf("No numbers to sort.\n");
        return 0;
    }

    int numbers[sum];
    printf("Enter %d numbers: ", sum);
    for (int i = 0; i < sum; i++)
    {
        if (scanf("%d", &numbers[i]) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }
    }

    selection_sort(numbers, sum);

    for (int i = 0; i < sum; i++)
    {
        if (i)
            printf(" ");
        printf("%d", numbers[i]);
    }
    printf("\n");
    return 0;
}