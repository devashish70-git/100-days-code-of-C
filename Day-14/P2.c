#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;

    scanf("%d", &n);

    if (n < 2) {
        printf("No even numbers");
        return 0;
    }

    for (i = 2; i <= n; i += 2)
        product *= i;

    printf("Product = %lld", product);
    return 0;
}