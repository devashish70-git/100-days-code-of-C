/* Question: Find the maximum sum of all subarrays of size k. */

#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    if (k <= 0 || k > n)
        return 0;

    int maxSum = 0;
    for (int i = 0; i < k; i++)
        maxSum += arr[i];

    for (int i = 1; i <= n - k; i++)
    {
        int sum = 0;
        for (int j = i; j < i + k; j++)
            sum += arr[j];

        if (sum > maxSum)
            maxSum = sum;
    }

    printf("%d", maxSum);
    return 0;
}
