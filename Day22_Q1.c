#include <stdio.h>
/*Program to check if a number is a strong number.*/
int main()
{
    int num, originalNum, sum = 0, remainder, factorial;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;

    while (num != 0) {
        remainder = num % 10; // Get the last digit
        factorial = 1;

        // Calculate factorial of the digit
        for (int i = 1; i <= remainder; i++) {
            factorial *= i;
        }

        sum += factorial; // Add the factorial to the sum
        num /= 10; // Remove the last digit from the number
    }

    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}