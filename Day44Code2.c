//Q88. Replace spaces in a string with hyphens.
#include <stdio.h>
int main()
{
    char s[1000];
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i]; i++)
        putchar(s[i] == ' ' ? '-' : s[i]);
    return 0;
}
