#include <stdio.h>

int main()
{
    int length, width, height, volume, weight;
    printf("Please enter the length, width and height of the box:\n");
    scanf("%d %d %d", &length, &width, &height);
    volume = length * width * height;
    weight = (volume + 165) / 166;
    printf("Dimension: %dx%dx%d\nVolume (cubic inches): %d\nDimensional weight (pounds): %d", length, width, height, volume, weight);
    return 0;
}