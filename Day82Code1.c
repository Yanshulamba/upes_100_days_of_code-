//Q132. Define an enum for traffic lights and print the corresponding action.
#include <stdio.h>
#include <string.h>
enum Light
{
    RED, YELLOW, GREEN
};
int main()
{
    char s[20];
    scanf("%19s", s);
    enum Light x = !strcmp(s, "RED") ? RED : !strcmp(s, "YELLOW") ? YELLOW : GREEN;
    printf(x == RED ? "Stop" : x == YELLOW ? "Wait" : "Go");
    return 0;
}
