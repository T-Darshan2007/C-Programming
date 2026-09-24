#include <stdio.h>

void main()
{
    char day = '\0';
    printf("Enter (m,t,w,r,f,s,u):- ");
    scanf("%c",&day);
    switch (day)
    {
    case 'm':
        printf("Monday");
        break;
    case 't':
        printf("Tuesday");
        break;
    case 'w':
        printf("Wednesday");
        break;
    case 'r':
        printf("Thursday");
        break;
    case 'f':
        printf("Friday");
        break;
    case 's':
        printf("Saturday");
        break;
    case 'u':
        printf("Sunday");
        break;
    
    default:
        printf("Enter a number from(1-7)");
        break;
    }
}