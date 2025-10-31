#include <stdio.h>

int numbox[1005];

int bitCount(unsigned int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n = n >> 1;
    }
    return count;
}

int main()
{
    int n, m;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &numbox[i]);
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
        for (int i = 0; i < n; i++)
            numbox[i] *= bitCount(numbox[i]);
    for (int i = 0; i < n; i++)
        printf("%d ", numbox[i]);
    return 0;
}