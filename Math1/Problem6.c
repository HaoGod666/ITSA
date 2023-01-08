#include <stdio.h>

int main() {
    // miles to kilometers
    int mile;
    while (scanf("%d", &mile) != EOF) {
        printf("%.1f\n", (double)mile * 1.6);
    }
}
