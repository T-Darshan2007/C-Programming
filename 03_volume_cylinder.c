#include <stdio.h>

int main()
{
    float radius, height, volume;
    float pi = 3.14159;

    scanf("%f %f", &radius, &height);

    volume = pi * radius * radius * height;

    printf("Volume of Cylinder = %.2f", volume);

    return 0;
}
