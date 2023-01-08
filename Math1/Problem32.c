#include <stdio.h>
int main() {
    // Determine whether it is a Armstrong number
    int num, sum = 0;
    scanf("%d", &num);
    for (int temp_num = num; temp_num > 0; temp_num /= 10){
        int temp = temp_num % 10;
        sum += temp * temp * temp;
    }
    if (sum == num) printf("Yes\n");
    else printf("No\n");
}
