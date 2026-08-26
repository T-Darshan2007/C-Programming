#include <stdio.h>

int main()
{
    char str[20];
    fgets(str, sizeof(str), stdin);
    printf("Welcome to the World of Java, %s", str);
}