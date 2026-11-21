//Q127. Convert the contents of a file to uppercase and write them to another file.
#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE * a = fopen("input.txt", "r"), * b = fopen("output.txt", "w");
    if (! a || ! b)
        return 1;
    int c;
    while ((c = fgetc(a)) != EOF)
        fputc(toupper(c), b);
    fclose(a);
    fclose(b);
    return 0;
}
