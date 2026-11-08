#include <stdio.h>
/*Find the sum of each row of a matrix and store it in an array.*/
int main()
{
    int rows, cols, i, j;

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);

    int matrix[rows][cols]; // Declare a 2D array (matrix)
    int rowSums[rows]; // Array to store the sum of each row

    // Read elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of each row and store it in rowSums
    for(i = 0; i < rows; i++)
    {
        rowSums[i] = 0; // Initialize sum for the current row
        for(j = 0; j < cols; j++)
        {
            rowSums[i] += matrix[i][j]; // Add each element of the row to the sum
        }
    }

    // Print the sum of each row
    printf("The sum of each row is:\n");
    for(i = 0; i < rows; i++)
    {
        printf("Row %d: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}