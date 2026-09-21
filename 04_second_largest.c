#include <stdio.h>

int main()
{
    int arr[] = {12, 5, 18, 7, 25, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int second = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    printf("Second Largest = %d", second);

    return 0;
}
