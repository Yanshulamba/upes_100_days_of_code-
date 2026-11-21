
/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
//Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main()
{
    int temp,a,b;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);

    temp=a;
    a=b;
    b=temp;

    printf("Swapped 1st no. is: %d\n",a);
    printf("Swapped 2nd no. is: %d",b);

    return 0;
}