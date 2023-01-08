#include <stdio.h>
#include <stdlib.h>

int main() {
    // Calculate the power of two useing Visual Basic
    int num;
    while (scanf("%d", &num) != EOF) {
        if (num < 31)
            printf("%d\n", 1 << num);
        else
            printf("Value of more than 31\n");
    }
}
