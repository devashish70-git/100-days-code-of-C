#include <stdio.h>

int main()
{
    int a, b, remainder;

    scanf("%d %d", &a, &b);

    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    while (b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("HCF = %d", a);
    return 0;
}