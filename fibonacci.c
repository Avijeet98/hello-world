#include <stdio.h>

/* Prints the first n numbers of the Fibonacci series. */
int main() {
    int n;
    long long a = 0, b = 1, next;

    printf("How many terms? ");
    scanf("%d", &n);

    printf("Fibonacci series:");
    for (int i = 0; i < n; i++) {
        printf(" %lld", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");

    return 0;
}
