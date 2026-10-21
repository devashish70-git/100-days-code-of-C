/* Question: Find the repeated element in an integer array. */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int nums[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[i] == nums[j])
            {
                printf("%d", nums[i]);
                return 0;
            }
        }
    }

    return 0;
}
