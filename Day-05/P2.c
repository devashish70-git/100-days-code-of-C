#include <stdio.h>

int main() {
    int t, h, min, sec;

    scanf("%d", &t);

    h = t / 3600;
    min = (t % 3600) / 60;
    sec = t % 60;

    printf("%d:%d:%d\n", h, min, sec);

    return 0;
}