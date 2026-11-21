//Q139. Define an enum for status values and print their integer values.
#include <stdio.h>
enum Status
{
    SUCCESS, FAILURE, TIMEOUT
};
int main()
{
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}
