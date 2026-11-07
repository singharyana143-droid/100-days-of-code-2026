#include <stdio.h>
/*Program to print all the prime numbers from 1 to n.*/
int main()
{
    int i, j, n, isPrime;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are:\n", n);
    for(i = 2; i <= n; i++)
    {
        isPrime = 1; // Assume i is prime
        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                isPrime = 0; // i is not prime
                break;
            }
        }
        if(isPrime)
            printf("%d ", i);
    }
    return 0;
}