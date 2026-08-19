#include <stdio.h>
#include <math.h>
/*Program to calculate simple and compound interest for given principal, rate, and time*/
int main()
{
    float p,r,t,si,ci;
    printf("Enter p,r,t;");
    scanf("%f %f %f" ,&p,&r,&t);
si=(p*r*t)/100;
ci=p*(pow((1+r/100),t)-1);
printf("simple interest is %.2f\n",si);
printf("compound interest is %.2f\n",ci);
return 0;
}