#include <stdio.h>

int main()
{
    char str[100];
    int sum = 0;

    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        sum = sum + (str[i] - '0');
    }

    printf("Sum = %d", sum);

    return 0;
}