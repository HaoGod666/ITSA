#include <stdio.h>
#include <stdlib.h>

int main() {
    // distance divide by the difference in speed of two people
    double speed1_dif = 1 - (30 * 0.0254), distance;
    while (scanf("%lf", &distance) != EOF) {
        printf("%.f\n", distance / speed1_dif+0.4);
    }
}
