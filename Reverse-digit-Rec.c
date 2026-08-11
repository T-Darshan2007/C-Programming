#include <stdio.h>

int rev_digit(int rev, int n);

int main() 
{
    int num;
    scanf("%d", &num);
    printf("%d", rev_digit(0,num));

    return 0;
}

int rev_digit(int rev, int n)
{
    if(n == 0)
    {
        return rev;
    }
    else
    {
        return rev_digit(rev*10 + n%10, n/10);
    }
}