/* Question: Create info.txt and write the user's name and age using fprintf(). */

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char name[100];
    int age;

    file = fopen("info.txt", "w");

    if (file == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter name: ");
    fgets(name, 100, stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);

    fclose(file);
    printf("Data successfully saved to info.txt");

    return 0;
}
