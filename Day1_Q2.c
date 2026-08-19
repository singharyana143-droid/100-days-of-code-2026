#include <stdio.h>
/*Program to input two numbers and display their sum, difference, product, and quotient.*/
 int main()
{
    int a,b,sum,difference,product;
    float quotient;
    printf("Enter two numbers");
    scanf("%d %d",&a , &b);
    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=(float)a/b;
    printf("Sum of %d and %d is %d\n",a,b,sum);
    printf("Difference of %d and %d is %d\n",a,b,difference);
    printf("Product of %d and %d is %d\n",a,b,product);
    printf("Quotient of %d and %d is %.2f\n",a,b,quotient);
    return 0;
}