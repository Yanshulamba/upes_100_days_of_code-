
/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
//Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main()
{
    int a,n;
    printf("Enter input:");
    scanf("%d",&a);

    n=a*(a+1)/2;

    printf("Sum of natural numbers till %d is %d",a,n);
    return 0;
}