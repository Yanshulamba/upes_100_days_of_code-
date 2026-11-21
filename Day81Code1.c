//Q131. Define an enum for days of the week and print their values.
#include <stdio.h>
enum Day
{
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};
int main()
{
    char * n[] =
    {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"
    }
    ;
    for (int i = 0; i < 7; i++)
        printf("%s = %d\n", n[i], i);
    return 0;
}
