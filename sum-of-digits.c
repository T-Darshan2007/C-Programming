#include <stdio.h>

int main() 
{
    int num, count=0;
    scanf("%d", &num);
    while(num>0)
    {
        count = count + num%10;
        num=num/10;
    }
    printf("The sum of digits is: %d", count);
    return 0;
}