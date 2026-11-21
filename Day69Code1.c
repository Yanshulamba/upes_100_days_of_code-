//Q119. Find the duplicate element in an array.
#include <stdio.h>
int main()
{
    int n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] == a[j])
    {
        printf("%d", a[i]);
        return 0;
    }
    return 0;
}
