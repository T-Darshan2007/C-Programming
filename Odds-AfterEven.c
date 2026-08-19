#include <stdio.h>

int main()
{
    int Arr[20];
    for(int i=0; i<20; i++) 
    {
        scanf("%d", &Arr[i]);
    }
    for(int i=0; i<20; i++) 
    {
        if(Arr[i]%2==0)
        {
            printf("%d ", Arr[i]);
        }
    }
    for(int i=0; i<20; i++) 
    {
        if(Arr[i]%2!=0)
        {
            printf("%d ", Arr[i]);
        }
    }
}