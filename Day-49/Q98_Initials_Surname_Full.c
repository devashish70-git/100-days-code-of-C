/* Question: Print initials of a name with the surname displayed in full. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char first[100], last[100];
    scanf("%99s %99s", first, last);
    printf("%c. %s", toupper(first[0]), last);
    return 0;
}
