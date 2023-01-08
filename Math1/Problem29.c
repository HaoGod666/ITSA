#include <stdio.h>

int is_prime(int num) {
    // Determine whether it is prime
    if (num < 2)
        return 0;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return 0;
    return 1;
}

int main() {
    int num;
    scanf("%d", &num);
    // find the max prime number
    for (int i = num - 1; i > 0; i--) {
        if (is_prime(i)) {
            printf("%d\n", i);
            break;
        }
    }
}
