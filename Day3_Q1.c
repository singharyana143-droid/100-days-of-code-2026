#include <stdio.h>
/*Program to convert temperature from Celsius to Fahrenheit.*/
int main()
{
    float celsius,fahreneit;
    printf("Enter temperature in celsius:");
    scanf("%f",&celsius);
    fahreneit=(celsius*9/5)+32;
    printf("Fahrenheit=%.2f",fahreneit);
    return 0;
}
