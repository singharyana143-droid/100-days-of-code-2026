#include <stdio.h>
/* Program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.*/
int main()
 {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        double numerator = 2.0 * i - 1; // Numerator is 1, 3, 5, ...
        double denominator = 2.0 * i; // Denominator is 2, 4, 6, ...
        sum += numerator / denominator; // Add the term to the sum
    }

    printf("Sum of the series up to %d terms is: %.6f\n", n, sum);
    return 0;
}