#include <stdio.h>

/* A simple calculator for +, -, * and /. */
int main() {
    double x, y;
    char op;

    printf("Enter an expression (e.g. 8 * 3): ");
    scanf("%lf %c %lf", &x, &op, &y);

    switch (op) {
        case '+': printf("%.2f + %.2f = %.2f\n", x, y, x + y); break;
        case '-': printf("%.2f - %.2f = %.2f\n", x, y, x - y); break;
        case '*': printf("%.2f * %.2f = %.2f\n", x, y, x * y); break;
        case '/':
            if (y == 0)
                printf("Error: cannot divide by zero\n");
            else
                printf("%.2f / %.2f = %.2f\n", x, y, x / y);
            break;
        default:
            printf("Unknown operator: %c\n", op);
    }

    return 0;
}
