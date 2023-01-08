#include <stdio.h>

int fun(int n) {
    if (n == 0 || n == 1) {
        return n + 1;
    } else {
        return fun(n - 1) + fun(n / 2);
    }
}

int main() {
    int num;

    while (scanf("%d", &num) != EOF) {
        printf("%d\n", fun(num));
    }
}
