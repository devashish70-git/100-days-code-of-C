/* Question: Check if a string is a palindrome. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[200];
    int i, n = 0, ok = 1;
    fgets(s, 200, stdin);
    while (s[n] && s[n] != '\n')
        n++;
    for (i = 0; i < n / 2; i++)
        if (s[i] != s[n - 1 - i])
            ok = 0;
    printf(ok ? "Palindrome" : "Not Palindrome");
    return 0;
}
