#include <stdio.h>

int main() {
    // output i*i
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        printf("%d*%d=%d\n", i, i, i * i);
    }
}
