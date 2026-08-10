#include <stdio.h>

int count(int n);

int main() 
{
    int num;
    scanf("%d", &num);
    printf("The no of digits is %d", count(num));

    return 0;
}

int count(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return 1 + count(n/10);
    }
}