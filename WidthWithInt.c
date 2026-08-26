#include <stdio.h>

int main()
{
    int num = 1, num1 = -10, num2 = 100, num3 = 1000;
    printf("%+07d\n", num);
    printf("%+07d\n", num1);
    printf("%+07d\n", num2);
    printf("%+07d\n", num3);

    printf("%+d\n", num);
    printf("%+d\n", num1);
    printf("%+d\n", num2);
    printf("%+d\n", num3);

    printf("%4d\n", num);
    printf("%4d\n", num1);
    printf("%4d\n", num2);
    printf("%4d\n", num3);

    printf("%6d\n", num);
    printf("%6d\n", num1);
    printf("%6d\n", num2);
    printf("%6d\n", num3);

    printf("%10d\n", num);
    printf("%10d\n", num1);
    printf("%10d\n", num2);
    printf("%10d\n", num3);
    return 0;
}