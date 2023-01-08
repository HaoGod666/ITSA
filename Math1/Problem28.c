#include <stdio.h>

int main() {
    // Multiples of 35 from 1~N
    int num, i;
    scanf("%d", &num);
    for (i = 1; i * 35 <= (num - 35); i++) {
        printf("%d ", i * 35);
    }
    printf("%d\n", i * 35);
}
