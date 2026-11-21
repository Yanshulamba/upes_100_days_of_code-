/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    int odd = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + odd;
        odd = odd + 2;
    }

    printf("%d", sum);

    return 0;
}