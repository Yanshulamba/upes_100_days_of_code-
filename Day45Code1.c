//Q89. Count frequency of a given character in a string.
#include <stdio.h>
int main()
{
    char s[1000], ch;
    fgets(s, sizeof s, stdin);
    scanf(" %c", &ch);
    int n = 0;
    for (int i = 0; s[i]; i++)
        if (s[i] == ch)
            n++;
    printf("%d", n);
    return 0;
}
