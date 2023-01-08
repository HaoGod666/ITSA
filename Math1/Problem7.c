#include <stdio.h>
#include <stdlib.h>

int main() {
    // Calculate the square and cube
    int num;
    while (scanf("%d", &num) != EOF) {
        printf("%d %d %d\n", num, num * num, num * num * num);
    }
}
