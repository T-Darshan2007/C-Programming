#include <stdio.h>

int BinarySearch(int arr[], int size, int num)
{
    int left = 0;
    int right = size - 1;

    while(left <= right)
    {
        int mid = (left + right) / 2;

        if(arr[mid] == num)
            return mid;
        else if(arr[mid] < num)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    int num;
    scanf("%d", &num);

    int result = BinarySearch(arr, size, num);

    if(result != -1)
        printf("Found at index %d", result);
    else
        printf("Not Found");

    return 0;
}
