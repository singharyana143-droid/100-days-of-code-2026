#include <stdio.h>
/*Program to print the following pattern:
*****
 ****
  ***
   **
    * */
int main()
{
    int i, j, space;
    for(i = 5; i >= 1; i--)
    {
        for(space = 5 - i; space > 0; space--)
        {
            printf(" "); // Print leading spaces
        }
        for(j = 1; j <= i; j++)
        {
            printf("*"); // Print stars
        }
        printf("\n");
    }
    return 0;
}