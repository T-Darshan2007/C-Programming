#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    printf("%d", arr[(sizeof(arr)/sizeof(arr[0]))/2]);
    return 0;
}