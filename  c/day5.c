#include <stdio.h>
#include <math.h>   // for pow() function

int main() {
    float principal, rate, time;
    float SI, CI;

    // Input values
    scanf("%f %f %f", &principal, &rate, &time);

    // Calculate Simple Interest
    SI = (principal * rate * time) / 100;

    // Calculate Compound Interest
    CI = principal * pow((1 + rate / 100), time) - principal;

    // Output results
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", SI, CI);

    return 0;
}