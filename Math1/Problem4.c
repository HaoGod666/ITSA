#include <stdio.h>
#include <stdlib.h>

int main() {
    // Add, multiply, subtract, divide two numbers
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d+%d=%d\n", num1, num2, num1 + num2);
    printf("%d*%d=%d\n", num1, num2, num1 * num2);
    printf("%d-%d=%d\n", num1, num2, num1 - num2);
    // Keep the remainder positive
    if (num1 >= 0)
        printf("%d/%d=%d...%d\n", num1, num2, num1 / num2, num1 % num2);
    else if (num2 >= 0)
        printf("%d/%d=%d...%d\n", num1, num2, (num1 - num2 + 1) / num2,
               (num1 % num2 + num2) % num2);
    else
        printf("%d/%d=%d...%d\n", num1, num2, (num1 + num2 + 1) / num2,
               (num1 % num2 - num2) % num2);
}
