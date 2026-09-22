#include <stdio.h>

int Linear_search(int *Arr, int n, int target);

void main()
{
    int arr[] = {10,89,66,50,25,8};
    int num = Linear_search(arr,sizeof(arr)/sizeof(arr[0]),90);
    if(num!=-1)
    {
        printf("Element Found At Position:- %d", num);
    }
    else
    printf("Element Not Found");
}

int Linear_search(int *Arr, int n, int target)
{
    for(int i=0;i<n;i++)
    {
        if(*Arr == target)
        {
            return i;
        }
        Arr++;
    }
    return -1;
}