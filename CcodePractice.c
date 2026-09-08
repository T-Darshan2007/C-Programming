#include <stdio.h>

int main()
{
    int age;
    float cgpa;
    char grade;
    char name[30];

    printf("Enter you Age: ");
    scanf("%d", &age);

    printf("Enter you cgpa: ");
    scanf("%f", &cgpa);

    printf("Enter you grade: ");
    scanf(" %c", &grade);

    printf("Enter you name: ");
    scanf("%s", &name);

    printf("%d\n", age);
    printf("%f\n", cgpa);
    printf("%c\n", grade);
    printf("%s\n", name);
    return 0;
}