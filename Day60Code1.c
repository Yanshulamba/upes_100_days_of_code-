//Q110. Find the maximum element in every subarray of size k.
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
        int m = a[i];
        for (int j = i + 1; j < i + k; j++)
            if (a[j] > m)
                m = a[j];
        printf("%d ", m);
    }
    return 0;
}
