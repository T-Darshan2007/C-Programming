#include <stdio.h>

int Find(int arr[], int size, int num);

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    int num;
    scanf("%d", &num);

    int size = sizeof(arr) / sizeof(arr[0]);

    int n = Find(arr, size, num);

    if(n != -1)
    {
        printf("Found at %d", n);
    }
    else
    {
        printf("Not Found");
    }

    return 0;
}

int Find(int arr[], int size, int num)
{
    int p1 = 0;
    int p2 = size - 1;

    while(p1 <= p2)
    {
        if(arr[p1] == num)
        {
            return p1;
        }
        else if(arr[p2] == num)
        {
            return p2;
        }
        else
        {
            p1++;
            p2--;
        }
    }

    return -1;
}