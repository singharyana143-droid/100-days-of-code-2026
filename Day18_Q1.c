#include <stdio.h>
/*Program to print all factors of a given number.*/
int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);
    for(i = 1; i <= num; i++) {
        if(num % i == 0) { // Check if i is a factor of num
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}