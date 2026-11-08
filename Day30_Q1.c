#include <stdio.h>
/*Count even and odd numbers in an array.*/
int main()
{
    int n, i, evenCount = 0, oddCount = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
        {
            evenCount++; // Increment even count
        }
        else
        {
            oddCount++; // Increment odd count
        }
    }

    // Print the counts of even and odd numbers
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}