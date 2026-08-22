#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, re, im;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation");
        return 0;
    }

    d = b * b - 4 * a * c;

    if (d > 0) {
        printf("Real and distinct roots: %.2lf, %.2lf",
               (-b + sqrt(d)) / (2 * a),
               (-b - sqrt(d)) / (2 * a));
    } else if (d == 0) {
        printf("Real and equal roots: %.2lf", -b / (2 * a));
    } else {
        re = -b / (2 * a);
        im = sqrt(-d) / fabs(2 * a);
        printf("Complex roots: %.2lf + %.2lfi, %.2lf - %.2lfi",
               re, im, re, im);
    }
    return 0;
}