#include <stdio.h>
/*Find the transpose of a matrix.*/
int main()
{
    int rows, cols, i, j;

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);

    int matrix[rows][cols]; // Declare a 2D array (matrix)
    int transpose[cols][rows]; // Declare a 2D array for the transpose

    // Read elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the transpose of the matrix
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j]; // Swap rows and columns
        }
    }

    // Print the transpose of the matrix
    printf("The transpose of the matrix is:\n");
    for(i = 0; i < cols; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n"); // New line after each row
    }

    return 0;
}