#include <stdio.h>
#include <math.h>

int main() {
    double population = 1000.0;
    double rate = 0.10;   // 10% growth
    int years = 10;

    printf("Initial Population = %.0f\n", population);

    for (int i = 1; i <= years; i++) {
        population = population * (1 + rate);  // increase by 10%
        printf("Population after year %d = %.0f\n", i, population);
    }

    printf("\nPopulation after %d years = %.0f\n", years, population);

    return 0;
}
