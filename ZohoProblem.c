#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool is_vowel(char C);

int main()
{
    char str[10];
    scanf("%s", str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(!(is_vowel(str[i])))
        {
            printf("%c", str[i]);
        }
        else if(is_vowel(str[i]) && str[i] == str[i+1])
        {
            printf("%c", str[i]);
            printf("%c", str[i+1]);
            i+=1;
        }
    }
    return 0;
}

bool is_vowel(char C)
{
    C = tolower(C);
    if(C=='a' || C=='e' || C=='i' || C=='o' || C=='u')
    {
        return true;
    }
}