//Q86. Check whether a string is a palindrome.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = 0;
    int i = 0, j = strlen(s) - 1;
    while (i < j && s[i] == s[j])
        i++, j--;
    printf(i >= j ? "Palindrome" : "Not palindrome");
    return 0;
}
