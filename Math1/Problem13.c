#include <stdio.h>

int main() {
    // Calculate the fee according to the rules required by the questions
    int start_h, start_m, end_h, end_m;
    scanf("%d %d", &start_h, &start_m);
    scanf("%d %d", &end_h, &end_m);
    int time = (end_h * 60 + end_m) - (start_h * 60 + start_m);

    if (time <= 120) {
        printf("%d\n", time / 30 * 30);
    } else if (time <= 240) {
        printf("%d\n", (time - 120) / 30 * 40 + 120);
    } else {
        printf("%d\n", (time - 240) / 30 * 60 + 280);
    }
}
