//Q107. Find the previous greater element to the left for each array element.
#include <stdio.h>
int main()
{
    int n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
    {
        int x = - 1;
        for (int j = i - 1; j >= 0; j--)
            if (a[j] > a[i])
        {
            x = a[j];
            break;
        }
        printf("%d%s", x, i == n - 1 ? "" : ", ");
    }
    return 0;
}
