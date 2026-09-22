#include <stdio.h>

int max(int *Arr, int n);
int min(int *Arr, int n);

void main()
{
    int arr[] = {10,89,66,45,50,8};
    printf("Max element in array is :- %d", max(arr, sizeof(arr)/sizeof(arr[0])));
    printf("Min element in array is :- %d", min(arr, sizeof(arr)/sizeof(arr[0])));
}

int max(int *Arr, int n)
{
    int max = -999;
    for(int i=0;i<n;i++)
    {
        if(*Arr>max)
        max=Arr[i];
        Arr++;
    }
    return max;
}

int min(int *Arr, int n)
{
    int min = 999;
    for(int i=0;i<n;i++)
    {
        if(*Arr<max)
        min=Arr[i];
        Arr++;
    }
    return min;
}