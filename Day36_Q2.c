#include <stdio.h>
/*Find the sum of all elements in a matrix.*/
int main()
{
    int rows, cols, i, j, sum = 0;

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);

    int matrix[rows][cols]; // Declare a 2D array (matrix)

    // Read elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add each element to sum
        }
    }

    // Print the sum of all elements in the matrix
    printf("The sum of all elements in the matrix is: %d\n", sum);

    return 0;
}