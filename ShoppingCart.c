#include <stdio.h>

int main()
{
    char item[50];
    float price = 0.0f;
    char curr = '$';
    int quan;
    float total;

    printf("What you would like to buy: ");
    fgets(item, 50, stdin);
    item[sizeof(item)-1] = '\0';
    printf("How would the price of each: ");
    scanf("%f", &price);
    printf("What the Quantity need: ");
    scanf("%d", &quan);
    printf("The total is ");
    total = price*quan;
    printf("%c%f", curr, total);
    return 0;
}