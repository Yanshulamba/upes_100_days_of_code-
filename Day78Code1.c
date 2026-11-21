//Q128. Count vowels and consonants in a file.
#include <stdio.h>
#include <ctype.h>
int main()
{
    char fn[100];
    scanf("%99s", fn);
    FILE * f = fopen(fn, "r");
    if (! f)
        return 1;
    int c, v = 0, k = 0;
    while ((c = fgetc(f)) != EOF)
        if (isalpha(c))
    {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            v++;
        else k++;
    }
    fclose(f);
    printf("Vowels: %d\nConsonants: %d", v, k);
    return 0;
}
