#include <stdio.h>

int Rev(int n, int re);

int main()
{
    int m,n;
    scanf("%d", &m);
    scanf("%d", &n);
    for(int i=m; i<n; i++)
    {
        if(Rev(i,0) == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

int Rev(int n, int re)
{
    if(n==0)
    {
        return re;
    }
    else
    {
        return Rev(n/10, re*10+n%10);
    }
}