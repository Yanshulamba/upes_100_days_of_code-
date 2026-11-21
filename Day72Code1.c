//Q122. Read and display the contents of a file.
#include <stdio.h>
int main()
{
    FILE * f = fopen("info.txt", "r");
    char s[500];
    if (! f)
    {
        printf("Error opening file");
        return 1;
    }
    while (fgets(s, sizeof s, f))
        printf("%s", s);
    fclose(f);
    return 0;
}
