/* Question: Count characters, words and lines in a text file. */

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char filename[100];
    int ch, characters = 0, words = 0, lines = 0, inWord = 0;

    printf("Enter filename: ");
    scanf("%99s", filename);

    file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        if (ch == '\n')
            lines++;

        if (isspace((unsigned char)ch))
            inWord = 0;
        else if (!inWord)
        {
            words++;
            inWord = 1;
        }
    }

    if (characters > 0)
    {
        fseek(file, -1, SEEK_END);
        if (fgetc(file) != '\n')
            lines++;
    }

    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
