#include <stdio.h>
#include <stdlib.h>

int main() {
    // calculate the area of the triangle
    double lower, height; 
    while (scanf("%lf %lf", &lower, &height) != EOF) {
        printf("%.1f\n", lower * height / 2);
    }
}
