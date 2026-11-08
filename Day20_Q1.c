#include <stdio.h>
/*Program to find the product of odd digits of a number.*/
int main() 
{
    int num, product = 1, hasOddDigit = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10; // Get the last digit
        if (remainder % 2 != 0) { // Check if the digit is odd
            product *= remainder; // Multiply it to the product
            hasOddDigit = 1; // Mark that we have found an odd digit
        }
        num /= 10; // Remove the last digit from the number
    }

    if (hasOddDigit) {
        printf("Product of odd digits: %d\n", product);
    } else {
        printf("No odd digits found.\n");
    }

    return 0;
}