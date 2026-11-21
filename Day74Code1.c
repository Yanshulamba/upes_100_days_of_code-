//Q124. Copy the contents of one file to another.
#include <stdio.h>
int main()
{
    char s[100], d[100];
    scanf("%99s%99s", s, d);
    FILE * a = fopen(s, "r"), * b = fopen(d, "w");
    if (! a || ! b)
        return 1;
    int c;
    while ((c = fgetc(a)) != EOF)
        fputc(c, b);
    fclose(a);
    fclose(b);
    printf("File copied successfully to %s", d);
    return 0;
}
