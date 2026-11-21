//Q94. Find the longest word in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000], best[1000] = "", w[1000] = "";
    fgets(s, sizeof s, stdin);
    int k = 0;
    for (int i = 0;; i++)
    {
        if (s[i] && s[i] != ' ' && s[i] != '\n')
            w[k++] = s[i];
        else
        {
            w[k] = 0;
            if (k > (int) strlen(best))
                strcpy(best, w);
            k = 0;
            if (! s[i] || s[i] == '\n')
                break;
        }
    }
    printf("%s", best);
    return 0;
}
