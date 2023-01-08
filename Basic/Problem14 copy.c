#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char num[1000];
    int offset;

    scanf("%s", num);
    char result[] = "YES";
    int len = strlen(num), half_len = len / 2;

    for (int i = 0; i < half_len; i++) {
        // printf("%c %c\n", *front, *back);
        if (num[i] != num[len - 1 - i]) {
            strcpy(result, "NO");
            break;
        }
    }
    printf("%s\n", result);
}
