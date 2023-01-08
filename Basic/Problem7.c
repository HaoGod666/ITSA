#include <stdio.h>

int main(){
    char operator;
    int n1, n2, i1, i2, num;

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf(" %c %d %d %d %d", &operator, &n1, &i1, &n2, &i2);
        if (operator == '+') {
            printf("%d %d\n", n1+n2, i1+i2);
        }else if (operator == '-'){
            printf("%d %d\n", n1-n2, i1-i2);
        }else if (operator == '*'){
            printf("%d %d\n", n1*n2-i1*i2, n1*i2+n2*i1);
        }
    }
}