#include <stdio.h>

int main()
{
    int lar=-999,slar=-999,min=999,smin=999;
    int Arr[10];
    for(int i=0; i<10; i++) 
    {
        scanf("%d", &Arr[i]);
    }
    for(int i=0; i<10; i++) 
    {
        if(i%2==0)
        {
            if(Arr[i]>lar)
            {
                slar=lar;
                lar=Arr[i];
            }
            else if(Arr[i]>slar && Arr[i]!=lar) 
            {
                slar = Arr[i];
            }
        }
        else
        {
            if(Arr[i]<min)
            {
                smin=min;
                min=Arr[i];
            }
            else if(Arr[i]>min && Arr[i]<smin) 
            {
                smin = Arr[i];
            }
        }
    }
    printf("%d", slar+smin);
    return 0;
}