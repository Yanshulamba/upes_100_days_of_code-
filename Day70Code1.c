//Q120. Convert the first letter of each word to uppercase and the remaining letters to lowercase.
#include <stdio.h>
#include <ctype.h>
int main()
{
    char s[1000];
    fgets(s, sizeof s, stdin);
    int nw = 1;
    for (int i = 0; s[i]; i++)
    {
        if (nw &&isalpha(s[i]))
            s[i] = toupper(s[i]);
        else if (isalpha(s[i])) s[i] = tolower(s[i]);
        nw = (s[i] == ' ');
    }
    printf("%s", s);
    return 0;
}
