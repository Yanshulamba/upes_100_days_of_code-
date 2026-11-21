//Q125. Append text to an existing file.
#include <stdio.h>
#include <string.h>
int main()
{
    char fn[100], s[500];
    scanf("%99s", fn);
    getchar();
    fgets(s, sizeof s, stdin);
    FILE * f = fopen(fn, "a");
    if (! f)
        return 1;
    fprintf(f, "%s", s);
    fclose(f);
    printf("File updated successfully with appended text.");
    return 0;
}
