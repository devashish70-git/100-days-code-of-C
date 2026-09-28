/* Question: Find the first repeating lowercase alphabet in a string. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[200];
    int seen[26] = {0}, i;
    fgets(s, 200, stdin);
    for (i = 0; s[i]; i++)
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (seen[s[i] - 'a'])
            {
                printf("%c", s[i]);
                return 0;
            }
            seen[s[i] - 'a'] = 1;
        }
    printf("-1");
    return 0;
}
