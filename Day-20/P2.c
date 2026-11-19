#include <stdio.h>

int main()
{
    long long n, temp, result = 0, place = 1;
    int digit, count = 0;

    scanf("%lld", &n);

    if (n < 0)
    {
        printf("Invalid binary number");
        return 0;
    }

    temp = n;

    do
    {
        digit = temp % 10;

        if (digit != 0 && digit != 1)
        {
            printf("Invalid binary number");
            return 0;
        }

        result += (1 - digit) * place;
        place *= 10;
        count++;
        temp /= 10;
    } while (temp > 0);

    printf("%0*lld", count, result);
    return 0;
}