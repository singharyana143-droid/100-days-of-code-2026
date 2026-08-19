#include <stdio.h>
/*Program to swap two numbers without using a third variable.*/
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d", &a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping,first number is %d and second number is %d",a,b);
    return 0;
}