#include <stdio.h>
/*Program to print the following pattern:
   *
  ***
 *****
*******
 *****
  ***
   * */
  int main()
  {
    int i, j, space;
    // Upper part of the pattern
    for(i = 1; i <= 4; i++)
    {
        for(space = 4 - i; space > 0; space--)
        {
            printf(" "); // Print leading spaces
        }
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*"); // Print stars
        }
        printf("\n");
    }
    // Lower part of the pattern
    for(i = 3; i >= 1; i--)
    {
        for(space = 4 - i; space > 0; space--)
        {
            printf(" "); // Print leading spaces
        }
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*"); // Print stars
        }
        printf("\n");
    }
    return 0;
  }
  