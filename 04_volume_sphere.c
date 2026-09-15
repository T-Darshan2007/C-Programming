#include <stdio.h>

int main()
{
    float radius, volume;
    float pi = 3.14159;

    scanf("%f", &radius);

    volume = (4.0 / 3.0) * pi * radius * radius * radius;

    printf("Volume of Sphere = %.2f", volume);

    return 0;
}
