#include <stdio.h>
/*Program to input an integer and check whether it is positive, negative or zero using nested if–else.*/
int main()
{
    int num;
    printf("Enter an integer:");
    scanf("%d", &num);
    if (num >0)
    {
        printf("%d is positive.",num);
    }
    else
    {
        //Inner if else statement to check whether the number is negative or zero
        if (num < 0)
        {
            printf("%d is negative.",num);
        }
        else
        {
            printf("%d is zero.",num);
        }
    }
    return 0;
}