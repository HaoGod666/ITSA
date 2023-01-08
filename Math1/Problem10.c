#include <stdio.h>
#include <stdlib.h>

int main() {
    // Celsius temperature to Fahrenheit
    double num;
    while (scanf("%lf", &num) != EOF) {
        printf("%.1f\n", num * 9 / 5 + 32);
    }
}
