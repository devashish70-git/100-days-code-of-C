/* Question: Find the pivot integer between 1 and n. */

#include <stdio.h>

int main()
{
    int n, answer = -1;
    scanf("%d", &n);

    for (int x = 1; x <= n; x++)
    {
        int leftSum = 0, rightSum = 0;

        for (int i = 1; i <= x; i++)
            leftSum += i;

        for (int i = x; i <= n; i++)
            rightSum += i;

        if (leftSum == rightSum)
        {
            answer = x;
            break;
        }
    }

    printf("%d", answer);
    return 0;
}
