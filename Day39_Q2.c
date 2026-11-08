#include <stdio.h>
/*Find the sum of main diagonal elements for a square matrix.*/
int main()
{
    int rows, cols, i, j, sum = 0;

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);

    if(rows != cols)
    {
        printf("The matrix is not square, so it does not have a main diagonal.\n");
        return 0;
    }

    int matrix[rows][cols]; // Declare a 2D array (matrix)

    // Read elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
            if(i == j) // Check if the element is on the main diagonal
            {
                sum += matrix[i][j]; // Add to sum if it's on the main diagonal
            }
        }
    }

    // Print the sum of main diagonal elements
    printf("The sum of main diagonal elements is: %d\n", sum);

    return 0;
}
