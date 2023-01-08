#include <stdio.h>
#include <stdlib.h>

int main() {
    // Calculate the area of a square
    double edge;
    while (scanf("%lf", &edge) != EOF) {
        printf("%.1f\n", edge * edge + 0.04); // round to one decimal place
    }
}
