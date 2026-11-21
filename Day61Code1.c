//Q111. Find the first negative number in every subarray of size k.
#include <stdio.h>
int main()
{
    int n, k, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    for (int i = 0; i + k <= n; i++)
    {
        int x = 0;
        for (int j = i; j < i + k; j++)
            if (a[j] < 0)
        {
            x = a[j];
            break;
        }
        printf("%d ", x);
    }
    return 0;
}
