/* Question: Find the length of the longest substring without repeating characters. */

#include <stdio.h>
#include <string.h>

int main()
{
    char s[500];
    fgets(s, 500, stdin);
    s[strcspn(s, "\n")] = '\0';

    int maxLength = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        int seen[256] = {0};
        int length = 0;

        for (int j = i; s[j] != '\0'; j++)
        {
            unsigned char ch = (unsigned char)s[j];
            if (seen[ch])
                break;

            seen[ch] = 1;
            length++;
        }

        if (length > maxLength)
            maxLength = length;
    }

    printf("%d", maxLength);
    return 0;
}
