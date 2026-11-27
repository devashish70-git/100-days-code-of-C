/* Question: Open an existing file in append mode and add a new line of text. */

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char filename[100], text[500];

    printf("Enter filename: ");
    scanf("%99s", filename);
    getchar();

    file = fopen(filename, "a");

    if (file == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, 500, stdin);

    fprintf(file, "%s", text);
    fclose(file);

    printf("Text appended successfully.");
    return 0;
}
