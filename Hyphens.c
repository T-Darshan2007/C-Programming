#include <stdio.h>

int main()
{
    char str[100];
    scanf("%s", str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='-')
        {
            printf("%c", str[i]);
        }
    }
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]!='-')
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}