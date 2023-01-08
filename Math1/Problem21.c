#include <stdio.h>

int main() {
    int num;
    // Build a Factorial table
    long long fac[20];
    fac[0] = 1;
    for (int i = 1; i < 20; i++) {
        fac[i] = i * fac[i - 1];
    }

    scanf("%d", &num);
    printf("%lld\n", fac[num]);
}
