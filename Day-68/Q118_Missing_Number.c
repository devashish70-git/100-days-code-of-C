/* Question: Find the missing number from an array containing numbers from 0 to n. */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int nums[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    int expected = n * (n + 1) / 2;
    printf("%d", expected - sum);

    return 0;
}
