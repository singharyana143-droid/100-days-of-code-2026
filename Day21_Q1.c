#include <stdio.h>
/*Program to swap the first and last digit of a number.*/
int main() {
    int num, firstDigit, lastDigit, numWithoutFirstLast, swappedNum, placeValue = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Get the last digit
    lastDigit = num % 10;

    // Get the first digit
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
        placeValue *= 10; // Keep track of the place value of the first digit
    }

    // Remove the first and last digits from the number
    numWithoutFirstLast = (num % placeValue) / 10;

    // Construct the new number with swapped digits
    swappedNum = lastDigit * placeValue + numWithoutFirstLast * 10 + firstDigit;

    printf("Number after swapping first and last digits: %d\n", swappedNum);
    return 0;
}