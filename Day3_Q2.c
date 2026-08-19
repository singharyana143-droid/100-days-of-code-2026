#include <stdio.h>
/*Program to swap two numbers using a third variable.*/
int main()
{
    int a,b,temp;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b = temp;
    printf("After swapping, first number is %d and second number is %d",a,b);
return 0;
}