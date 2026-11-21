//Q116. Find two array elements whose sum equals a given target.
#include <stdio.h>
int main()
{
    int n, t, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &t);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] + a[j] == t)
    {
        printf("%d %d", i, j);
        return 0;
    }
    printf("-1 -1");
    return 0;
}
