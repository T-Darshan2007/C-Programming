#include <stdio.h>

int main()
{
    float side, volume;

    scanf("%f", &side);

    volume = side * side * side;

    printf("Volume of Cube = %.2f", volume);

    return 0;
}
