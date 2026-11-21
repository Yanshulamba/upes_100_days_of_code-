//Q101. Find the first and last occurrence of an element in an array.
#include <stdio.h>
int main()
{
    int n, t, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &t);
    int f = - 1, l = - 1;
    for (int i = 0; i < n; i++)
        if (a[i] == t)
    {
        if (f == - 1)
            f = i;
        l = i;
    }
    printf("%d,%d", f, l);
    return 0;
}
