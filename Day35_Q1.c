#include <stdio.h>
/*Find the second largest element in an array.*/
int main()
{
    int n, i, largest, secondLargest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if(n < 2)
    {
        printf("Array must have at least two elements to find the second largest.\n");
        return 1; // Exit with an error code
    }

    int arr[n]; // Declare an array of size n

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and secondLargest
    largest = secondLargest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest; // Update secondLargest
            largest = arr[i]; // Update largest
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i]; // Update secondLargest
        }
    }

    if(secondLargest == largest)
    {
        printf("There is no distinct second largest element in the array.\n");
    }
    else
    {
        printf("The second largest element in the array is: %d\n", secondLargest);
    }

    return 0;
}