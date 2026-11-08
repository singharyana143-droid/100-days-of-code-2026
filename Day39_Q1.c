#include <stdio.h>
/*Check if the elements on the diagonal of a matrix are distinct.*/
int main()
{
    int rows, cols, i, j, isDistinct = 1;

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);

    if(rows != cols)
    {
        printf("The matrix is not square, so it does not have a diagonal.\n");
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

    // Check if the diagonal elements are distinct
    for(i = 0; i < rows; i++)
    {
        for(j = i + 1; j < rows; j++)
        {
            if(matrix[i][i] == matrix[j][j])
            {
                isDistinct = 0; // Set flag to false if any diagonal elements are equal
                break;
            }
        }
        if(!isDistinct)
        {
            break;
        }
    }

    // Print the result
    if(isDistinct)
    {
        printf("The diagonal elements of the matrix are distinct.\n");
    }
    else
    {
        printf("The diagonal elements of the matrix are not distinct.\n");
    }

    return 0;
}