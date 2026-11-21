//Q109. Find the maximum sum of a subarray of size k.
#include <stdio.h>
int main()
{
    int n, k, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    long long s = 0, b = - 9223372036854775807LL;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
        if (i >= k)
            s -= a[i - k];
        if (i >= k - 1 && s > b)
            b = s;
    }
    printf("%lld", b);
    return 0;
}
