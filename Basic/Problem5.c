#include <stdio.h>

int main(){
    int num, bin[8];

    while(scanf("%d",&num) != EOF){
        if (num < 0){
            num += 256;
        }
        for (int i = 7; i>=0; i--){
            bin[i] = num % 2;
            num /= 2;
        }
        for (int i = 0; i < 8; i++){
            printf("%d",bin[i]);
        }
        printf("\n");
    }
}