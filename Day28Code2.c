//Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/

#include <stdio.h>

int main() {
    int arr[5];
    int i;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The numbers are:\n");

    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
