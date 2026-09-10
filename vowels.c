#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[10];
    scanf("%s", str);
    for(int i=0;str[i]!='\0';i++)
    {
        char D = tolower(str[i]);
        if(D!='a' && D!='e' && D!='i' && D!='o' && D!='u')
        {
            printf("%c", D);
        }
    }
    return 0;
}