/* Question: Take a string and capitalize the first letter of every word. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[500];
    int newword = 1;

    fgets(str, 500, stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isspace((unsigned char)str[i]))
        {
            newword = 1;
        }
        else if (newword)
        {
            str[i] = toupper((unsigned char)str[i]);
            newword = 0;
        }
    }

    printf("%s", str);
    return 0;
}
