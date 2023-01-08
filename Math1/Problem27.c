#include <stdio.h>

int main() {
    // min_num~max_num =  1~max_num - 1~(min_num-1)
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    num2--;
    printf("%d\n", (num1 * (num1 + 1) / 2) - (num2 * (num2 + 1) / 2));
}
