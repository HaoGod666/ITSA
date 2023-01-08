#include <stdio.h>
#include <stdlib.h>

int main() {
    // Calculate the pay according to the rules required by the questions
    double work_hours, unit_pay;
    while (scanf("%lf %lf", &work_hours, &unit_pay) != EOF) {
        if (work_hours <= 60) {
            printf("%.1f\n", work_hours * unit_pay);
        } else if (work_hours <= 120) {
            printf("%.1f\n", (60 + (work_hours - 60) * 1.33) * unit_pay);
        } else {
            printf("%.1f\n", (60 + 60 * 1.33 + (work_hours - 120)*1.66) * unit_pay);
        }
    }
}
