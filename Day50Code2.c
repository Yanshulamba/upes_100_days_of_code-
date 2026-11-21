//Q100. Print all substrings of a given string.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[500];
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = 0;
    int n = strlen(s), first = 1;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
    {
        if (! first)
            printf(",");
        first = 0;
        for (int k = i; k <= j; k++)
            putchar(s[k]);
    }
    return 0;
}
