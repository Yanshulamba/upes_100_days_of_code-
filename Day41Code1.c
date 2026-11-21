//Q81. Find the length of a string without using strlen().
#include <stdio.h>
int main()
{
    char s[1000];
    fgets(s, sizeof s, stdin);
    int n = 0;
    while (s[n] && s[n] != '\n')
        n++;
    printf("%d", n);
    return 0;
}
