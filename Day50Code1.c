//Q99. Convert a date from DD/MM/YYYY format to DD-MMM-YYYY format.
#include <stdio.h>
int main()
{
    int d, m, y;
    char * mon[] =
    {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    }
    ;
    scanf("%d/%d/%d", &d, &m, &y);
    if (m >= 1 &&m <= 12)
        printf("%02d-%s-%04d", d, mon[m], y);
    return 0;
}
