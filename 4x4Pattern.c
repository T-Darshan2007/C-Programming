#include <stdio.h>

int main()
{
    int c = 3;
    for(int i = 1; i<=c*c; i++)
    {
        if(i%c!=0)
        {
            printf("%d ", i);
        }
        else{
            printf("%d\n", i);
        }
    }
    return 0;
}