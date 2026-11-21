//Q105. Find the majority element in an array.
#include <stdio.h>
int main()
{
    int n, a[1000], cand = 0, c = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (c == 0)
            cand = a[i], c = 1;
        else if (a[i] == cand) c++;
        else c--;
    }
    c = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == cand)
            c++;
    printf("%d", c > n / 2 ? cand : - 1);
    return 0;
}
