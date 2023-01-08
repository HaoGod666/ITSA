#include <stdio.h>
#include <stdlib.h>

int main() {
    // Calculate the square after adding two numbers
    int num1, num2;
    while (scanf("%d %d", &num1, &num2) != EOF) {
        printf("%d\n", (num1 + num2) * (num1 + num2));
    }
}
