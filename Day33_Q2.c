#include <stdio.h>
/*Insert an element in a sorted array at the appropriate position.*/
int main()
{
    int n, i, x;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Declare an array of size n + 1

    // Read elements into the sorted array
    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &x);

    // Find the appropriate position to insert the element
    int pos = 0;
    while(pos < n && arr[pos] < x)
    {
        pos++;
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