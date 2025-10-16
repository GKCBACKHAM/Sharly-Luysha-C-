#include <stdio.h>

int Airport_start[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
char Airport_start_char[8][20] = {"8:00 a.m.", "9:43 a.m.", "11:19 a.m.", "12:47 p.m.", "2:00 p.m.", "3:45 p.m.", "7:00 p.m.", "9:45 p.m."};
char Airport_arrival[8][20] = {"10:16 a.m.", "11:52 a.m.", "1:31 p.m.", "3:00 p.m.", "4:08 p.m.", "5:55 p.m.", "9:20 p.m.", "11:58 p.m."};
int delta[8];
int num;

int abs(int i)
{
    if (i < 0)
        i = -i;
    return i;
}

int main()
{
    int start_time_1, start_time_2;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &start_time_1, &start_time_2);
    start_time_2 += start_time_1 * 60;
    for (int i = 0; i < 8; i++)
        delta[i] = abs(start_time_2 - Airport_start[i]);
    for (int i = 1; i < 8; i++)
    {
        if (delta[i] < delta[i - 1])
            num = i;
        if (delta[i] == delta[i - 1])
        {
            printf("Closest departure time is %s and %s, arriving at %s and %s", Airport_start_char[i - 1], Airport_start_char[i], Airport_arrival[i - 1], Airport_arrival[i]);
            return 0;
        }
    }
    printf("Closest departure time is %s, arriving at %s", Airport_start_char[num], Airport_arrival[num]);
    return 0;
}