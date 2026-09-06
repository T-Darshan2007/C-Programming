#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int p1=0,p2=(sizeof(arr)/sizeof(arr[0]))-1,n=0, num=90;
    while(n!=-1)
    {
        if(arr[p1]==num)
        {
            printf("found at %d", p1);
            break;
        }
        else if(arr[p2]==num)
        {
            printf("found at %d", p2);
            break;
        }
        else if(p1==p2)
        {
            printf("Not found");
            break;
        }
        else{
            p1+=1;
            p2-=1;
        }
    }
    return 0;
}