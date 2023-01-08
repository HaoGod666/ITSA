#include <stdio.h>

int perfect(int num){
    // Determine whether it is a perfect number
    int sum = 1;
    for(int i = 2; i*i <= num;i++){
        if (i*i == num) sum += i;
        else if(num % i == 0) sum += (i + num/i);
    }
    if (sum == num) return 1;
    else return 0;
}

int main() {
    int num, not_first = 0;
    scanf("%d", &num);
    // output all perfect numbers from 2~N
    for (int i = 2; i <= num; i++) {
        if (perfect(i)){
            if (not_first) printf(" ");
            printf("%d", i);
            not_first = 1;
        }
    }
    printf("\n");
}
