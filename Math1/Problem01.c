#include <stdio.h>
#include <stdlib.h>

int main() {
    // calculate the area of the Trapezoid
    double upper, lower, height;
    while (scanf("%lf %lf %lf", &upper, &lower, &height) != EOF) {
        printf("Trapezoid area:%.1f\n", (upper + lower) * height / 2); // Only output to one decimal place
    }
}
