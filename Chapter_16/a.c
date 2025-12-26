#include <stdio.h>

int main()
{
    struct point
    {
        int x;
        int y;
    };
    struct rectangle
    {
        struct point upper_left;
        struct point lower_right;
    } r = {{0, 0}, {3, -2}};
    /*为测试，不妨令左上坐标为（0，0），右下坐标为（3，-2）*/
    int s;
    s = (r.lower_right.x - r.upper_left.x) * (r.upper_left.y - r.lower_right.y);
    printf("%d", s);
    return 0;
}