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
    struct point m;
    m.x = (r.lower_right.x + r.upper_left.x) / 2;
    m.y = (r.lower_right.y + r.upper_left.y) / 2;
    printf("(%d,%d)", m.x, m.y);
    return 0;
}