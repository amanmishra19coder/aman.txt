#include <stdio.h>

int main() {
    int num, choice;
    int posCount = 0, negCount = 0, zeroCount = 0;
    int n, m, i;

    // Part 1: Count +ve, -ve, and zeros
    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            posCount++;
        else if (num < 0)
            negCount++;
        else
            zeroCount++;

        printf("Do you want to enter another number? (1 for Yes / 0 for No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    printf("\nCount of positive numbers = %d", posCount);
    printf("\nCount of negative numbers = %d", negCount);
    printf("\nCount of zeros = %d\n", zeroCount);

    // Part 2: Multiplication table
    printf("\nEnter a number to print its multiplication table: ");
    scanf("%d", &n);
    printf("Enter second number: ");
    scanf("%d", &m );
    printf("\nMultiplication Table of %d:\n", n);
    for (i = 1; i <= 10 ; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}
 
