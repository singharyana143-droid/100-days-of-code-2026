#include <stdio.h>
/*Program to find the HCF (GCD) of two numbers.*/
int main() {
    int a, b, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    hcf = 1;
    for(int i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }
    printf("HCF of %d and %d is %d\n", a, b, hcf);
    return 0;
}