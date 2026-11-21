//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include <stdio.h>

int main()
{
    int arr[100][100];
    int rows, cols, i, j;

    scanf("%d %d", &rows, &cols);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}