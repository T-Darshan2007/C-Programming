#include <stdio.h>

void main()
{
    int arr[] = {10,89,66,45,50,8};
    int n = sizeof(arr)/sizeof(arr[0]),temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
}