#include <stdio.h>
 /*Program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.*/
 int main()
 {
float a,b,c;
printf("Enter the lengths of the three sides of the triangle .");
scanf("%f %f %f", &a, &b, &c);
if(a==b && b==c)
{
    printf("The triangle is an equilateral triangle.");
}
else if(a==b || b==c || a==c)
{
    printf("The triangle is an isosceles triangle.");
}
else
{
    printf("The triangle is a scalene triangle.");
}
return 0;
}