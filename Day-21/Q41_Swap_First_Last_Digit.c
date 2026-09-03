#include <stdio.h>

int main()
{
    long long n, temp, first, last, power = 1, result;
    scanf("%lld", &n);

    if (n < 0)
    {
        printf("Enter a non-negative number");
        return 0;
    }

    temp = n;
    last = n % 10;

    while (temp >= 10)
    {
        temp /= 10;
        power *= 10;
    }
    first = temp;

    if (power == 1)
    {
        result = n;
    }
    else
    {
        result = last * power + ((n % power) / 10) * 10 + first;
    }

    printf("%lld", result);
    return 0;
}
