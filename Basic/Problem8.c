#include <stdio.h>

int main(){
    int num;

    while(scanf("%d",&num) != EOF){
        // sieve of Eratosthenes
        if(num < 2){
            printf("NO\n");
        }else{
            int flag = 1;
            for(int i = 2; i*i <= num; i++){
                if(num % i == 0){
                    printf("NO\n");
                    flag = 0;
                    break;
                }
            }
            if (flag)
                printf("YES\n");
        }
    }
}