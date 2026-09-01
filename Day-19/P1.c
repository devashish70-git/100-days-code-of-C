#include <stdio.h>

int main()
{
    int a, b, x, y, remainder;
    long long lcm;

    scanf("%d %d", &a, &b);

    if (a == 0 || b == 0)
    {
        printf("LCM = 0");
        return 0;
    }

    x = a < 0 ? -a : a;
    y = b < 0 ? -b : b;

    while (y != 0)
    {
        remainder = x % y;
        x = y;
        y = remainder;
    }

    lcm = ((long long)a / x) * b;
    if (lcm < 0)
        lcm = -lcm;

    printf("LCM = %lld", lcm);
    return 0;
}