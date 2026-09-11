#include <stdio.h>

int main()
{
    int arr[] = {26, 24, 20, 12, 5, 46, 27, 10, 30, 17, 32, 22, 13, 4, 40, 39, 11, 25, 36, 1, 44, 19, 34, 49, 42, 31, 29, 21, 23, 43, 47, 37, 33, 45, 14, 50, 48, 3, 28, 38, 6, 35, 7, 9, 15, 16, 18, 2, 8, 41};
    int p1=0,p2=(sizeof(arr)/sizeof(arr[0]))-1,p3=(sizeof(arr)/sizeof(arr[0]))/2,p4=((sizeof(arr)/sizeof(arr[0]))/2)+1;
    int target = 78, n=0;
    while(n!=-1)
    {
        if(arr[p1] == target)
        {
            printf("Found at p1 %d", p1);
            n=-1;
        }
        else if(arr[p2] == target)
        {
            printf("Found at p2 %d", p2);
            n=-1;
        }
        else if(arr[p3] == target)
        {
            printf("Found at p3 %d", p3);
            n=-1;
        }
        else if(arr[p4] == target)
        {
            printf("Found at p4 %d", p4);
            n=-1;
        }
        else if(p1==p3 || p2==p4)
        {
            printf("Not found");
            n=-1;
        }
        else{
            p1+=1;
            p2-=1;
            p3-=1;
            p4+=1;
        }
    }
    return 0;
}