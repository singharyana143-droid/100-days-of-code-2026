#include <stdio.h>
/*Program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.*/
int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        double numerator = 2.0 * i; // Numerator is 2, 4, 6, ...
        double denominator = 3.0 + (i - 1) * 4.0; // Denominator is 3, 7, 11, ...
        sum += numerator / denominator; // Add the term to the sum
    }

    printf("Sum of the series up to %d terms is: %.6f\n", n, sum);
    return 0;
}