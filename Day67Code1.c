//Q117. Merge two sorted arrays.
#include <stdio.h>
int main()
{
    int n, m, a[1000], b[1000], i = 0, j = 0;
    scanf("%d", &n);
    for (int k = 0; k < n; k++)
        scanf("%d", &a[k]);
    scanf("%d", &m);
    for (int k = 0; k < m; k++)
        scanf("%d", &b[k]);
    while (i < n || j < m)
        printf("%d ", (j == m || (i < n &&a[i] <= b[j])) ? a[i++] : b[j++]);
    return 0;
}
