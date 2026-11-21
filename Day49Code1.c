//Q97. Print the initials of a name.
#include <stdio.h>
#include <ctype.h>
int main()
{
    char s[500];
    fgets(s, sizeof s, stdin);
    int nw = 1;
    for (int i = 0; s[i]; i++)
    {
        if (nw &&isalpha(s[i]))
        {
            printf("%c.", toupper(s[i]));
            nw = 0;
        }
        if (s[i] == ' ')
            nw = 1;
    }
    return 0;
}
