#include <stdio.h>
/*Check if a matrix is symmetric.*/
int main()
{
    int rows, cols, i, j, isSymmetric = 1;

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);

    if(rows != cols)
    {
        printf("The matrix is not symmetric because it is not square.\n");
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
        }
    }

    // Check if the matrix is symmetric
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                isSymmetric = 0; // Set flag to false if any element doesn't match
                break;
            }
        }
        if(!isSymmetric)
        {
            break;
        }
    }

    // Print the result
    if(isSymmetric)
    {
        printf("The matrix is symmetric.\n");
    }
    else
    {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}