#include <stdio.h>
#include <stdlib.h>

int main() {
    // Determine if it exceeds the circle
    int num1, num2;
    while (scanf("%d %d", &num1, &num2) != EOF) {
        if (num1 * num1 + num2 * num2 <= 200 * 200) {
            printf("inside\n");
        } else {
            printf("outside\n");
        }
    }
}
