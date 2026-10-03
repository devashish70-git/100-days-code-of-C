#include <stdio.h>

int main() {
    int a, b;
    char op;

    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+': printf("%d", a + b); break;
        case '-': printf("%d", a - b); break;
        case '*': printf("%d", a * b); break;
        case '/':
            if (b == 0) printf("Division by zero");
            else printf("%.2f", (float)a / b);
            break;
        case '%':
            if (b == 0) printf("Division by zero");
            else printf("%d", a % b);
            break;
        default: printf("Invalid operator");
    }

    return 0;
}