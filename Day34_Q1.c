#include <stdio.h>
/*Insert an element in an array at a given position.*/
int main()
{
    int n, i, x, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Declare an array of size n + 1 to accommodate the new element

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &x);

    printf("Enter the position to insert the element (0 to %d): ", n);
    scanf("%d", &pos);

    // Check if the position is valid
    if(pos < 0 || pos > n)
    {
        printf("Invalid position! Please enter a position between 0 and %d.\n", n);
        return 1; // Exit with an error code
    }

    // Shift elements to make space for the new element
    for(i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos] = x;

    // Print the updated array
    printf("Updated array:\n");
    for(i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}