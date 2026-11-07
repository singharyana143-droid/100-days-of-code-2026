#include <stdio.h>
/*Search for an element in an array using linear search.*/
int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found
}