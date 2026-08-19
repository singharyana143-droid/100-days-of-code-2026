#include <stdio.h>
 /*Program to find and display the sum of the first n natural numbers.*/
 int main()
 {
    int n,sum=0,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of first %d natural numbers is %d",n,sum);
    return 0;
 }