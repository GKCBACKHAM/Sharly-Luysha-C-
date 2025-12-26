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
    /*为测试，不妨令移动的x，y值分别为3，4*/
    int move_x = 3;
    int move_y = 4;
    r.lower_right.x += move_x;
    r.lower_right.y += move_y;
    r.upper_left.x += move_x;
    r.upper_left.y += move_y;
    printf("(%d,%d) and (%d,%d)", r.upper_left.x, r.upper_left.y, r.lower_right.x, r.lower_right.y);
    return 0;
}