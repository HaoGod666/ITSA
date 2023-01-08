#include <stdio.h>

int main() {
    // find all factors
    int num;
    scanf("%d", &num);
    for (int i = 1; i < num; i++) {
        if (num % i == 0) printf("%d ", i);
    }
    printf("%d\n", num);
}
