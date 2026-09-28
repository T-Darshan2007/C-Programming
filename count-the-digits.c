#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 1. Iterative Method
int countDigitsIterative(long long n) {
    int count = 0;
    if (n == 0) return 1;
    if (n < 0) n = -n;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}
// 2. Recursive Method
int countDigitsRecursive(long long n) {
    if (n < 0) n = -n;
    if (n < 10) return 1;
    return 1 + countDigitsRecursive(n / 10);
}
// 3. String Method
int countDigitsString(long long n) {
    char str[50];
    sprintf(str, "%lld", n);
    int length = strlen(str);
    if (n < 0) {
        return length - 1;
    }
    return length;
}
int main() {
    long long num;
    printf("Enter an integer: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("\n--- Digit Counting Results ---\n");
    printf("Iterative Method : %d\n", countDigitsIterative(num));
    printf("Recursive Method : %d\n", countDigitsRecursive(num));
    printf("String Method    : %d\n", countDigitsString(num));
    return 0;
}


