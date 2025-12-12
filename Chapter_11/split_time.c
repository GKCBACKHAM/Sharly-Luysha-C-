#include <stdio.h>

int h, m, s;

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 3600;
    *min = total_sec % 3600 / 60;
    *sec = total_sec % 60;
}

int main()
{
    long time;
    scanf("%ld", &time);
    split_time(time, &h, &m, &s);
    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}