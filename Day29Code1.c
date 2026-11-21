//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include <stdio.h>

int main() {
    int arr[5];
    int i, sum = 0;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++) {
        sum = sum + arr[i];
    }

    printf("Sum of array elements = %d", sum);

    return 0;
}
