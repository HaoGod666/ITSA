#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char num[1000];
    int offset;

    scanf("%s%n", num, &offset);
    char result[] = "YES";
    char *front = &num[0] - 1, *back = &num[offset];

    while ((++front != back--) && (front != back)) {
        // printf("%c %c\n", *front, *back);
        if (*front != *back) {
            strcpy(result, "NO");
            break;
        }
    }
    printf("%s\n", result);
}
