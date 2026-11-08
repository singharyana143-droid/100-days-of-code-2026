#include <stdio.h>
/*Program to print the following pattern:
    5
   45
  345
 2345
12345 */
int main()
{
    int i, j, space;
    for(i = 5; i >= 1; i--)
    {
        for(space = 1; space < i; space++)
        {
            printf(" "); // Print leading spaces
        }
        for(j = i; j <= 5; j++)
        {
            printf("%d", j); // Print numbers
        }
        printf("\n");
    }
    return 0;
}