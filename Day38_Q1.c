#include <stdio.h>
/*Add two matrices.*/
int main()
{
    int rows, cols, i, j;

    printf("Enter the number of rows in the matrices: ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrices: ");
    scanf("%d", &cols);

    int matrix1[rows][cols]; // Declare first 2D array (matrix)
    int matrix2[rows][cols]; // Declare second 2D array (matrix)
    int sum[rows][cols]; // Declare a 2D array for the sum

    // Read elements into the first matrix
    printf("Enter the elements of the first matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Read elements into the second matrix
    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate the sum of the two matrices
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j]; // Add corresponding elements
        }
    }

    // Print the sum of the two matrices
    printf("The sum of the two matrices is:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n"); // New line after each row
    }

    return 0;
}