#include <stdio.h>
/*Perform diagonal traversal of a matrix.*/
int main()
{
    int rows, cols, i, j;

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
        }
    }

    // Perform diagonal traversal
    printf("Diagonal traversal of the matrix:\n");
    for(i = 0; i < rows + cols - 1; i++)
    {
        for(j = 0; j <= i; j++)
        {
            if(j < rows && (i - j) < cols)
            {
                printf("%d ", matrix[j][i - j]);
            }
        }
        printf("\n"); // New line after each diagonal
    }

    return 0;
}