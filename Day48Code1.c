//Q95. Check whether one string is a rotation of another.
#include <stdio.h>
#include <string.h>
int main()
{
    char a[500], b[500], t[1000];
    fgets(a, sizeof a, stdin);
    fgets(b, sizeof b, stdin);
    a[strcspn(a, "\n")] = 0;
    b[strcspn(b, "\n")] = 0;
    strcpy(t, a);
    strcat(t, a);
    printf(strlen(a) == strlen(b) && strstr(t, b) ? "Rotation" : "Not rotation");
    return 0;
}
