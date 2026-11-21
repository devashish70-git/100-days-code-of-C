/* Question: Find the leftmost pivot index of an array. */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int nums[n];
    int total = 0, left = 0, answer = -1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        total += nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        int right = total - left - nums[i];
        if (left == right)
        {
            answer = i;
            break;
        }
        left += nums[i];
    }

    printf("%d", answer);
    return 0;
}
