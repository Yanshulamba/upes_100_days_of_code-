//Q96. Reverse each word in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    fgets(s, sizeof s, stdin);
    int st = 0;
    for (int i = 0;; i++)
        if (s[i] == ' ' || s[i] == '\n' || s[i] == 0)
    {
        for (int j = i - 1; j >= st; j--)
            putchar(s[j]);
        if (s[i] == ' ')
            putchar(' ');
        st = i + 1;
        if (s[i] != ' ')
            break;
    }
    return 0;
}
