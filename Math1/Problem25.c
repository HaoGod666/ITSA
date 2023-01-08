#include <stdio.h>

int main() {
    // The sum of the number divisible by 3 from 1~N is equal to the sum of 1~n/3 times 3
    int num;
    while (scanf("%d", &num) != EOF) {
        num /= 3;
        printf("%d\n", 3 * (num * (num + 1)) / 2);
    }
}
