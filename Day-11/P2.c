#include <stdio.h>

int main() {
    float cp, sp, percent;

    scanf("%f %f", &cp, &sp);

    if (cp <= 0) {
        printf("Invalid cost price");
    } else if (sp > cp) {
        percent = (sp - cp) * 100 / cp;
        printf("Profit = %.2f%%", percent);
    } else if (sp < cp) {
        percent = (cp - sp) * 100 / cp;
        printf("Loss = %.2f%%", percent);
    } else {
        printf("No profit, no loss");
    }

    return 0;
}