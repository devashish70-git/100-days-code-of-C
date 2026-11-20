/* Question: Change the date format from dd/04/yyyy to dd-Apr-yyyy. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int d, y;
    scanf("%d/04/%d", &d, &y);
    printf("%02d-Apr-%d", d, y);
    return 0;
}
