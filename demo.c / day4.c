/* #include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    scanf("%d %d", &a, &b);

    // Swap without third variable (using arithmetic operations)
    a = a + b;
    b = a - b;
    a = a - b;

    // Print result
    printf("After swap: %d %d\n", a, b);

    return 0;
}*/

#include <stdio.h>

int main() {
    int n, sum;

    // Input n
    scanf("%d", &n);

    // Formula for sum of first n natural numbers
    sum = n * (n + 1) / 2;

    // Print result
    printf("Sum=%d\n", sum);

    return 0;
}

