#include <stdio.h>
#include <string.h>

int main()
{
    char str[15]="Ajith KUmar";
    int n = strlen(str);
    printf("%d", n);
    /*if n = sizeof(str)/sizeof(str[0]) and str[] = "Ajith Kumar", no.of chars in str is 11
    but the output of n is 12, because of it count the null character */
    /*if n = sizeof(str)/sizeof(str[0]) and str[15] = "Ajith Kumar", no.of chars in str is 11
    but the output of n is 15, because of it count the total of no of size allocated to the array */
    return 0;
}