#include <stdio.h>

int main() {
     // transform decimal to Hexadecimal format
    int num;
    while (scanf("%d", &num) != EOF) {
        printf("%X\n", num);
    }
}
