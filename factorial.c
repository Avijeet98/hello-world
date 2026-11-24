#include <stdio.h>

/* Calculates n! (n factorial) using a loop. Works up to n = 20. */
int main() {
    int n;
    unsigned long long fact = 1;

    printf("Enter a number (0-20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Please enter a number from 0 to 20.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++)
        fact *= i;

    printf("%d! = %llu\n", n, fact);
    return 0;
}
