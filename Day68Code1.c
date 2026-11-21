//Q118. Find the missing number from 0 to n.
#include <stdio.h>
int main()
{
    int n, x;
    long long s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        s += x;
    }
    printf("%lld", (long long) n * (n + 1) / 2 - s);
    return 0;
}
