#include <stdio.h>

int sum(int n);

int main() 
{
    int num;
    scanf("%d", &num);
    printf("The sum of digits is: %d", sum(num));
    return 0;
}

int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return n%10 + sum(n/10);
    }
}