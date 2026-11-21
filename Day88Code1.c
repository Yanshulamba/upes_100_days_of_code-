//Q138. Define an enum for traffic light colors and print their integer values.
#include <stdio.h>
enum Light
{
    RED, YELLOW, GREEN
};
int main()
{
    char * n[] =
    {
        "RED", "YELLOW", "GREEN"
    }
    ;
    for (int i = RED; i <= GREEN; i++)
        printf("%s=%d\n", n[i], i);
    return 0;
}
