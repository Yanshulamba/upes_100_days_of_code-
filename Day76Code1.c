//Q126. Check whether a file exists and display its contents.
#include <stdio.h>
int main()
{
    char fn[100], s[500];
    scanf("%99s", fn);
    FILE * f = fopen(fn, "r");
    if (! f)
    {
        printf("Error: File does not exist!");
        return 0;
    }
    printf("File opened successfully.\n");
    while (fgets(s, sizeof s, f))
        printf("%s", s);
    fclose(f);
    return 0;
}
