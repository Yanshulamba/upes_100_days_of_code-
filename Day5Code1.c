//Write program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>

int main() {
    double principal = 5000.0;  
    double rate = 5.0;          
    double time = 3.0;          
    double n = 4.0;

    double r_decimal = rate / 100.0;

    double amount = principal * pow((1 + r_decimal / n), (n * time));
    
    double compound_interest = amount - principal;

    printf("Total Amount: %.2lf\n", amount);
    printf("Compound Interest: %.2lf\n", compound_interest);

    return 0;
}