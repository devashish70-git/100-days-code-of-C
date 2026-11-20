/* Question: Remove all vowels from a string. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[200];
    int i;
    fgets(s, 200, stdin);
    for (i = 0; s[i]; i++)
        if (!strchr("aeiouAEIOU", s[i]))
            putchar(s[i]);
    return 0;
}
