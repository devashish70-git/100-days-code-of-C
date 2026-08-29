#include <stdio.h>

int main()
{
    int n, place = 1;

    scanf("%d", &n);

    if (n < 0)
    {
        printf("Enter a non-negative number");
        return 0;
    }

    if (n == 0)
    {
        printf("0");
        return 0;
    }

    while (place <= n / 2)
        place *= 2;

    while (place > 0)
    {
        printf("%d", n / place);
        n %= place;
        place /= 2;
    }

    return 0;
}