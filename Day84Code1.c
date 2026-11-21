//Q134. Define an enum for status values and print the corresponding message.
#include <stdio.h>
#include <string.h>
enum Status
{
    SUCCESS, FAILURE, TIMEOUT
};
int main()
{
    char s[20];
    scanf("%19s", s);
    enum Status x = !strcmp(s, "SUCCESS") ? SUCCESS : !strcmp(s, "FAILURE") ? FAILURE : TIMEOUT;
    printf(x == SUCCESS ? "Operation successful" : x == FAILURE ? "Operation failed" : "Operation timed out");
    return 0;
}
