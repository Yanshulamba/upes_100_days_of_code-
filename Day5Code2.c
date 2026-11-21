/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include<stdio.h>
int main() 
{
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;              // 3600 seconds in an hour
    minutes = (totalSeconds % 3600) / 60;      // remaining seconds converted to minutes
    seconds = totalSeconds % 60;               // leftover seconds

    printf("%d seconds = %d:%d:%d (hh:mm:ss)\n", totalSeconds, hours, minutes, seconds);

    return 0;
}