#include <stdio.h>

int main() {
    // Calculate the fee according to the rules required by the questions
    double num;
    while (scanf("%lf", &num) != EOF) {
        if (num <= 800) {
            printf("%.1f\n", num * 0.9);
        } else if (num < 1500) {
            printf("%.1f\n", num * 0.9 * 0.9);
        } else {
            printf("%.1f\n", num * 0.9 * 0.79);
        }
    }
}
