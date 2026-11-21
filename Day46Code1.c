//Q91. Remove all vowels from a string.
#include <stdio.h>
#include <ctype.h>
int main()
{
    char s[1000];
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i]; i++)
    {
        char c = tolower(s[i]);
        if (c != 'a' &&c != 'e' &&c != 'i' &&c != 'o' &&c != 'u')
            putchar(s[i]);
    }
    return 0;
}
