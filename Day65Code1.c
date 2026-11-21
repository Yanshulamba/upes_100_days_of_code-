//Q115. Check whether two strings are anagrams.
#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000], b[1000];
    int f[26] =
    {
        0
    }
    ;
    fgets(a, sizeof a, stdin);
    fgets(b, sizeof b, stdin);
    a[strcspn(a, "\n")] = 0;
    b[strcspn(b, "\n")] = 0;
    for (int i = 0; a[i]; i++)
        f[a[i] - 'a']++;
    for (int i = 0; b[i]; i++)
        f[b[i] - 'a']--;
    for (int i = 0; i < 26; i++)
        if (f[i])
    {
        printf("Not Anagram");
        return 0;
    }
    printf("Anagram");
    return 0;
}
