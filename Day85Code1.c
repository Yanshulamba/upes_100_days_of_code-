//Q135. Define an enum with a custom starting value and print its values.
#include <stdio.h>
enum Value
{
    A = 10, B, C
};
int main()
{
    printf("A=%d\nB=%d\nC=%d", A, B, C);
    return 0;
}
