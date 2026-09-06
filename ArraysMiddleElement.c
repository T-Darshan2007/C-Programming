#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int p1=0,p2=0, n=0;
    while(n!=-1)
    {
        if(p1==(sizeof(arr)/sizeof(arr[0]))-1)
        {
            printf("%d", arr[p2]);
            n=-1;
        }
        else
        {
            p1+=2;
            p2+=1;
        }
    }
    return 0;
}