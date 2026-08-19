#include <stdio.h>
/*Program to calculate the area and circumference of a circle given its radius.*/
int main()
{
    float radius,area,circumference;
    printf("Enter radius of circle");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    circumference=2*3.14*radius;
    printf("Area of circle id %.2f\n",area);
printf("Circumference of circle is %.2f\n",circumference);
return 0;
}