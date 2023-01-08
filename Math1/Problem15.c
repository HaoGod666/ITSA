#include <stdio.h>
#include <stdlib.h>

int main() {
    // Determine if it exceeds the square
    int num1, num2;
    while (scanf("%d %d", &num1, &num2) != EOF) {
        if (num1 <= 100 && num2 <= 100) {
            printf("inside\n");
        } else {
            printf("outside\n");
        }
    }
}
