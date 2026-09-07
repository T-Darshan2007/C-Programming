#include <stdio.h>

int main()
{
    int arr[] = {25, 7, 42, 13, 89, 31};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int smallest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];

        if(arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}
