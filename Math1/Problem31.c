#include <stdio.h>

int main() {
    // Odd multiples of 6 from 1~N
    int num, i, sum = 0;
    scanf("%d", &num);
    for (i = 1; i * 6 <= num; i += 2)
        sum += i * 6;
    printf("%d\n", sum);
}
