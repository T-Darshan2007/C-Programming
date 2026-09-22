#include <stdio.h>

int Binary_Search(int Arr[], int n, int target);

void main()
{
    int arr[] = {8,10,45,50,66,89};
    int num = Binary_Search(arr, sizeof(arr)/sizeof(arr[0]), 90);
    if(num!=-1)
    printf("Element Found At Position:- %d", num);
    else
    printf("Element Not Found");
}

int Binary_Search(int Arr[], int n, int target)
{
    int low = 0, high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(Arr[mid] == target)
        return mid;
        else if(Arr[mid]<target)
        low = mid+1;
        else
        high = mid-1;
        
    }
    return -1;
}