#include <stdio.h>

int Find(int arr[], int size, int num)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == num)
            return i;
    }

    return -1;
}

int main()
{
    int arr[] = {5, 12, 8, 20, 15, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int num;
    scanf("%d", &num);

    int result = Find(arr, size, num);

    if(result != -1)
        printf("Found at index %d", result);
    else
        printf("Not Found");

    return 0;
}
