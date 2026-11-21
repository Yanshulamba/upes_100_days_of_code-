//Q137. Define an enum for user roles and print the corresponding welcome message.
#include <stdio.h>
#include <string.h>
enum Role
{
    ADMIN, USER, GUEST
};
int main()
{
    char s[20];
    scanf("%19s", s);
    enum Role r = !strcmp(s, "ADMIN") ? ADMIN : !strcmp(s, "USER") ? USER : GUEST;
    printf(r == ADMIN ? "Welcome Admin!" : r == USER ? "Welcome User!" : "Welcome Guest!");
    return 0;
}
