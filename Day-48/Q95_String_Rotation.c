/* Question: Check if one string is a rotation of another. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[200], b[200], twice[400];
    fgets(a, 200, stdin);
    fgets(b, 200, stdin);
    a[strcspn(a, "\n")] = 0;
    b[strcspn(b, "\n")] = 0;
    if (strlen(a) != strlen(b))
        printf("Not Rotation");
    else
    {
        strcpy(twice, a);
        strcat(twice, a);
        printf(strstr(twice, b) ? "Rotation" : "Not Rotation");
    }
    return 0;
}
