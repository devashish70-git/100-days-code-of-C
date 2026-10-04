/* Question: Find the index of the smallest element greater than or equal to x. */

#include <stdio.h>

int main()
{
    int n, x, answer = -1;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            answer = i;
            break;
        }
    }

    printf("%d", answer);
    return 0;
}
