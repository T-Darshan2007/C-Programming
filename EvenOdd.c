#include <stdio.h>

int main()
{
    printf("Enter a integer num;\n");
    int num;
    scanf("%d", &num);
    if(num%2==0) {
        printf("Even Number");
    }
    else 
    {
        printf("Odd Number");
    }
}