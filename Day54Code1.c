//Q104. Find the pivot integer where the sum from 1 to x equals the sum from x to n.
#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    long long total = n * (n + 1) / 2, s = 0;
    for (long long x = 1; x <= n; x++)
    {
        s += x;
        if (s == total - (s - x))
        {
            printf("%lld", x);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
