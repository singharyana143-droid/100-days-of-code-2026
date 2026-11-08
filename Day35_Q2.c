#include <stdio.h>
/*Rotate an array to the right by k positions.*/
int main()
{
    int n, i, k;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate (k): ");
    scanf("%d", &k);

    // Normalize k to be within the bounds of the array length
    k = k % n;

    // Rotate the array to the right by k positions
    rotateArray(arr, n, k);

    // Print the rotated array
    printf("The rotated array is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}