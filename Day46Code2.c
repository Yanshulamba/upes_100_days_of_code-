//Q92. Find the first repeating character in a string.
#include <stdio.h>
int main()
{
    char s[1000];
    int f[26] =
    {
        0
    }
    ;
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i]; i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            f[s[i] - 'a']++;
    for (int i = 0; s[i]; i++)
        if (s[i] >= 'a' && s[i] <= 'z' &&f[s[i] - 'a'] > 1)
    {
        putchar(s[i]);
        return 0;
    }
    printf("-1");
    return 0;
}
