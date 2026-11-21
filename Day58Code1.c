//Q108. Find the product of array elements except self.
#include <stdio.h>
int main()
{
    int n, a[1000];
    long long pre[1000], suf[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    pre[0] = 1;
    for (int i = 1; i < n; i++)
        pre[i] = pre[i - 1] * a[i - 1];
    suf[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
        suf[i] = suf[i + 1] * a[i + 1];
    for (int i = 0; i < n; i++)
        printf("%lld ", pre[i] * suf[i]);
    return 0;
}
