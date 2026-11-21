#include<stdio.h>
int main()
{
    int a,b,sum,product,diff,quot;
    scanf("%d %d",&a,&b);
    sum=a+b;
    product=a*b;
    diff=a-b;
    if (b=0)
        {
            quot=a/b;
            printf("Quotient:%d\n",quot);
        }
    else
        {
            printf("Division by zero is not allowed.\n");
        }
    printf("Sum:%d\n Product:%d\n Difference:%d\n",sum,product,diff);
    return 0;
}