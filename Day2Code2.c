//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
    float area,circumference,radius;
    printf("Enter radius of the circle:");
    scanf("%f",&radius);

    area=(22/7)*radius*radius;
    circumference=(22/7)*2*radius;

    printf("Area of the circle is: %f\n",area);
    printf("Circumference of the circle is: %f",circumference);

    return 0;
}