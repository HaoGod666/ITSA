#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}

int main() {
    int num;
    char buf[1000];
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &num);
    for (int i = 0; i < num; i++) {
        char suit;
        fgets(buf, sizeof(buf), stdin);
        char* lineTheRest = buf;
        int poker[4][100], count[4] = {0}, cnt = 0;
        int offset, num;

        while (sscanf(lineTheRest, " %c%d%n", &suit, &num, &offset) == 2) {
            if (suit == 'S') {
                poker[0][count[0]++] = num;
            } else if (suit == 'H') {
                poker[1][count[1]++] = num;
            } else if (suit == 'D') {
                poker[2][count[2]++] = num;
            } else if (suit == 'C') {
                poker[3][count[3]++] = num;
            }
            cnt++;
            lineTheRest += offset;
        }

        qsort(poker[0], count[0], sizeof(int), cmp);
        qsort(poker[1], count[1], sizeof(int), cmp);
        qsort(poker[2], count[2], sizeof(int), cmp);
        qsort(poker[3], count[3], sizeof(int), cmp);

        for (int j = 0; j < 4; j++) {
            char print_suit;
            if (j == 0) {
                print_suit = 'S';
            } else if (j == 1) {
                print_suit = 'H';
            } else if (j == 2) {
                print_suit = 'D';
            } else if (j == 3) {
                print_suit = 'C';
            }

            for (int k = 0; k < count[j]; k++) {
                printf("%c%d", print_suit, poker[j][k]);
                if (--cnt) {
                    printf(" ");
                }
            }
        }
        // printf("\n%d", i);
        printf("\n");
    }
}
