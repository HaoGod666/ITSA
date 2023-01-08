#include <stdio.h>
#include <stdlib.h>

int main() {
    // add two numbers
    int num1, num2;
    while (scanf("%d %d", &num1, &num2) != EOF) {
        printf("%d %d\n", num1 + num2);
    }
}
