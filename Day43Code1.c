//Q85. Reverse a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = 0;
    for (int i = strlen(s) - 1; i >= 0; i--)
        putchar(s[i]);
    return 0;
}
