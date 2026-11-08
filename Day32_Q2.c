#include <stdio.h>
 /*Find the digit that occurs the most times in an integer number.*/
 int main()
 {
    int num, digit, count[10] = {0}, maxCount = 0, mostFrequentDigit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Count the occurrences of each digit
    while (num != 0)
    {
        digit = num % 10; // Get the last digit
        count[digit]++;   // Increment the count for this digit
        num /= 10;        // Remove the last digit from the number
    }

    // Find the digit with the maximum count
    for (int i = 0; i < 10; i++) 
    {
        if (count[i] > maxCount) 
        {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most times is: %d (occurs %d times)\n", mostFrequentDigit, maxCount);
    return 0;
 }