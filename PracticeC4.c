#include <stdio.h>
#include <string.h>

void happyBirthda(char name[],int age);

void main()
{
    char name[20];
    int age;
    printf("Enter Your Name ");
    fgets(name,20,stdin);
    name[strlen(name)-1]='\0';
    printf("Enter your age ");
    scanf("%d", &age);
    happyBirthday(name, age);
}

void happyBirthday(char name[],int age)
{
    printf("Wish You Happy Happy Birthday\n");
    printf("Happy Birthday\n");
    printf("Happy Birthday\n");
    printf("To You %s\n", name);
    printf("You %d years old", age);
}