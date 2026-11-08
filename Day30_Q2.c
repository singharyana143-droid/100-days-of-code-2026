#include <stdio.h>
/*Count positive, negative, and zero elements in an array.*/
int main()
{
    int n, i, positiveCount = 0, negativeCount = 0, zeroCount = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > 0)
        {
            positiveCount++; // Increment positive count
        }
        else if(arr[i] < 0)
        {
            negativeCount++; // Increment negative count
        }
        else
        {
            zeroCount++; // Increment zero count
        }
    }

    // Print the counts of positive, negative, and zero numbers
    printf("Number of positive numbers: %d\n", positiveCount);
    printf("Number of negative numbers: %d\n", negativeCount);
    printf("Number of zeros: %d\n", zeroCount);

    return 0;
}