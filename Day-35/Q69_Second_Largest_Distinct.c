#include <stdio.h>

int main() {
    int n, i, largest, second, found = 0;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    largest = arr[0];

    for (i = 1; i < n; i++)
        if (arr[i] > largest)
            largest = arr[i];

    for (i = 0; i < n; i++) {
        if (arr[i] < largest && (!found || arr[i] > second)) {
            second = arr[i];
            found = 1;
        }
    }

    if (found)
        printf("%d", second);
    else
        printf("No second largest element");

    return 0;
}
