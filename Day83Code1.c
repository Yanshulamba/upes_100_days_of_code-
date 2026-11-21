//Q133. Define an enum for months and print the number of days in a given month.
#include <stdio.h>
#include <string.h>
enum Month
{
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};
int main()
{
    char s[10];
    scanf("%9s", s);
    char * n[] =
    {
        "", "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
    }
    ;
    int d[] =
    {
        0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    }
    ;
    for (int i = 1; i <= 12; i++)
        if (!strcmp(s, n[i]))
    {
        if (i == FEB)
            printf("28 or 29 days");
        else printf("%d days", d[i]);
    }
    return 0;
}
