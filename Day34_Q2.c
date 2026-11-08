#include <stdio.h>
/*Delete an element from an array.*/
int main()
{
    int n, i, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    // Check if the position is valid
    if(pos < 0 || pos >= n)
    {
        printf("Invalid position! Please enter a position between 0 and %d.\n", n - 1);
        return 1; // Exit with an error code
    }

    // Shift elements to delete the element at the specified position
    for(i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Print the updated array
    printf("Updated array after deletion:\n");
    for(i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}