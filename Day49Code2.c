//Q98. Abbreviate a name using initials and print the last name in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[500];
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = 0;
    char * last = strrchr(s, ' ');
    if (! last)
    {
        printf("%s", s);
        return 0;
    }
    for (char * p = s; p < last; p++)
        if (p == s || p[- 1] == ' ')
            printf("%c.", toupper(* p));
    printf(" %s", last + 1);
    return 0;
}
