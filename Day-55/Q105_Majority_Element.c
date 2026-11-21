/* Question: Print the majority element or -1 if it does not exist. */

#include <stdio.h>

int main()
{
    int n, answer = -1;
    scanf("%d", &n);
    int nums[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] == nums[i])
                count++;
        }

        if (count > n / 2)
        {
            answer = nums[i];
            break;
        }
    }

    printf("%d", answer);
    return 0;
}
