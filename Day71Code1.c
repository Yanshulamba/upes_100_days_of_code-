//Q121. Write a name and age to a file.
#include <stdio.h>
int main()
{
    char name[100];
    int age;
    fgets(name, sizeof name, stdin);
    scanf("%d", &age);
    FILE * f = fopen("info.txt", "w");
    if (! f)
        return 1;
    fprintf(f, "Name: %sAge: %d\n", name, age);
    fclose(f);
    printf("File created successfully! Data written to info.txt");
    return 0;
}
