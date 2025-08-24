//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#include <math.h>

int main() {
    float radius, area, circumference;

    // Input radius
    scanf("%f", &radius);

    // Calculate area and circumference
    area = M_PI * radius * radius;
    circumference = 2 * M_PI * radius;

    // Print results
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}
