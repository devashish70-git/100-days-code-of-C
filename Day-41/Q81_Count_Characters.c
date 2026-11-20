/* Question: Count characters in a string without using built-in length functions. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[200];
    int i = 0;
    fgets(s, 200, stdin);
    while (s[i] && s[i] != '\n')
        i++;
    printf("%d", i);
    return 0;
}
