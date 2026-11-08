#include <stdio.h>
/*Program to find the 1’s complement of a binary number and print it.*/
int main() {
    long long binaryNum, tempNum, remainder, onesComplement = 0, placeValue = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNum);

    tempNum = binaryNum; // Store the original binary number

    // Calculate the 1's complement
    while (tempNum != 0) {
        remainder = tempNum % 10; // Get the last digit
        if (remainder == 0) {
            onesComplement += 1 * placeValue; // Change 0 to 1
        }
        // If the digit is 1, we do nothing (it remains 0 in the complement)
        placeValue *= 10; // Move to the next place value
        tempNum /= 10; // Remove the last digit from the original number
    }

    printf("1's complement of %lld is: %lld\n", binaryNum, onesComplement);
    return 0;
}