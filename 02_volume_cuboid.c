#include <stdio.h>

int main()
{
    float length, breadth, height, volume;

    scanf("%f %f %f", &length, &breadth, &height);

    volume = length * breadth * height;

    printf("Volume of Cuboid = %.2f", volume);

    return 0;
}
