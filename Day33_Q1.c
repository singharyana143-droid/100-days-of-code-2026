#include <stdio.h>
/*Search in a sorted array using binary search.*/
int main()
{
    int n, i, x;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Read elements into the sorted array
    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &x);

    // Perform binary search
    int result = binarySearch(arr, n, x);

    if(result != -1)
    {
        printf("Element %d found at index %d.\n", x, result);
    }
    else
    {
        printf("Element %d not found in the array.\n", x);
    }

    return 0;
}